#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <error.h>
#include <pthread.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/ioctl.h>
#include <signal.h>
#include "myioctl.h"

#define PORT  8080
#define SIZE  32
#define LISTEN_NUM 10
//#define DEBUG 1
//定义结构体
struct recvctl{
	int led_statu;
	int beep_statu;
	int door_statu;
	int warmwater_statu;
};
struct sendmsg{
	char tem_data[5];
	int pm;
};
void *recvfun(void *arg)
{

	char *pwm     = "/dev/pwm0";
	char *led     = "/dev/led";

	struct recvctl recvbuf;
	int recv_len = 0;
	int connectedSockfd = (int)arg;
	int pwm_fd     = -1;
	int led_fd     = -1;
	pwm_fd = open(pwm, O_RDWR);
	if (pwm_fd < 0) {
		printf("open pwm failed");	
	}
	led_fd = open(led, O_RDWR);
	if (led_fd < 0) {
		printf("open led failed\n");	
	}
	while (1) {

		recv_len = recv(connectedSockfd, &recvbuf, sizeof(struct recvctl), 0);		
		if (recv_len < 0)
		{
			printf("recv data failed\n");
		} else {
#ifdef DEBUG	
			printf("led stat = %d\n", recvbuf.led_statu);
                	printf("beep stat = %d\n", recvbuf.beep_statu);
                	printf("door stat = %d\n", recvbuf.door_statu);
                	printf("water stat = %d\n", recvbuf.warmwater_statu);
                	printf("-----------------------------------\n");	
#endif
			//灯的控制
			if (recvbuf.led_statu == 1) {
				ioctl(led_fd, LED_ON, 0);	
			} else if (recvbuf.led_statu == 0) {
				ioctl(led_fd, LED_OFF, 0);	
			} else {
				printf("recv led ctl failed\n");	
			}
			//蜂鸣器的控制
			if (recvbuf.beep_statu == 1) {
				ioctl(pwm_fd, PWM_CMD_ON);		
			} else if (recvbuf.beep_statu == 0) {
				ioctl(pwm_fd, PWM_CMD_OFF);	
			} else {
					
				printf("recv pwm ctl failed\n");	
			}
			//门的控制
			if (recvbuf.door_statu == 1) {
				ioctl(led_fd, LED_ON, 1);		
			} else if (recvbuf.door_statu == 0) {
				ioctl(led_fd, LED_OFF, 1);	
			} else {
				printf("recv door ctl failed\n");	
			}
			//热水器的控制
			if (recvbuf.warmwater_statu == 1) {
				ioctl(led_fd, LED_ON, 2);		
			} else if (recvbuf.warmwater_statu == 0) {
				ioctl(led_fd, LED_OFF, 2);	
			} else {
				printf("recv water ctl failed\n");	
			}

		}
     	
		bzero(&recvbuf, sizeof(struct recvctl));	
	}
}
int read_adc(int fd)
{
	int tmp_val = 0;

	if (ioctl(fd, ADC_CMD_GET, &tmp_val) < 0) {
	
		printf("read adc wrong\n");	
	}
	return tmp_val;

}
int main()
{
	pid_t pid;

	pid = fork();
	int ret;
	if (pid < 0 ) {

		perror("fork");	
		exit(1);
	} else if (pid == 0) {
	
		ret = execl("./video", "video", NULL);	
		if (ret < 0) {
			perror("execl wrong\n");	
		}
		printf("i am son prosser\n");
		wait();
	
	} else {
		
		pthread_t thread_recv;

		char *ds18b20 = "/sys/bus/w1/devices/28-00000616b5f6/w1_slave";
		char *adc     = "/dev/adc0";
		int ds18b20_fd = -1;
		int adc_fd     = -1;
		int on = 1;
		int i;
		struct recvctl recvbuf;
		
		int son_pid = getpid();	
		struct sendmsg sendbuf = {"0", 0};
		int sockfd = 0; //等待连接的套接字描述符
		int connectedSockfd = 0;
		struct sockaddr_in addr;
		socklen_t addrlen = 0;
		char buf[SIZE] = {0};
		char end[5];
		int ret = 0;
		char *endbuf = (char *)malloc(6);
		char rbuf[80];
		//打开温度传感器
		//打开ADC
		adc_fd = open(adc, O_RDWR);
		if (adc_fd < 0) {
		
			perror("open adc failed\n");	
			return -1;
		}
		ds18b20_fd = open(ds18b20, O_RDONLY);
		if (ds18b20_fd < 0) {
			perror("open ds18b20 failed\n");	
			return -1;
		}
		//创建套接字 -- 流式套接字
		sockfd = socket( AF_INET, SOCK_STREAM, 0);
		if ( 0 > sockfd )
		{
			perror("socket error");
			return -1;
		
		}
        	if (0 > setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on))) {
               		 perror("set sock opt error");
        	}
		printf("server socket ok\r\n");
		//绑定地址
		addrlen = sizeof(addr);
		memset(&addr, 0, addrlen);
		addr.sin_family = AF_INET;
		addr.sin_port = htons(PORT);
		addr.sin_addr.s_addr = INADDR_ANY;

		if ( 0 > bind( sockfd, (struct sockaddr *)&addr, addrlen ))
		{
			perror("bind error");
			close(sockfd);
			return -1;
		}
		printf("server bind ok\r\n");
		//监听 
		listen( sockfd, LISTEN_NUM );
		//接受连接
		connectedSockfd = accept( sockfd, (struct sockaddr *)&addr, &addrlen );
		if ( 0 > connectedSockfd )
		{
			perror("accept error ");
			close(sockfd);
			return -1;
		}
		printf( "server accept ok, connectedSocket = %d\r\n", connectedSockfd );
		//创建线程, 并分离线程
		pthread_create(&thread_recv, NULL, (void *)recvfun, (void *)connectedSockfd);	
		pthread_detach(thread_recv);
		/*采集温度和adc值发给客户端*/	
		while (1) {

////////////////////////////////////////////////////////////////////////////////

       			read(ds18b20_fd,rbuf,sizeof(rbuf));
			lseek(ds18b20_fd, 0, SEEK_SET);
			printf("recv is %s\n", rbuf);
			endbuf = strrchr(rbuf, '=');
			printf("%s\n", endbuf);
			end[0] = endbuf[1];
			end[1] = endbuf[2];
			end[2] = endbuf[3];
			end[3] = endbuf[4];
			end[4] = endbuf[5];
			memcpy(sendbuf.tem_data, end,5);
			sendbuf.pm = read_adc(adc_fd);
			if (connectedSockfd < 0) {
				kill(son_pid+1, SIGKILL);
			}
//////////////////////////////////////////////////////////////////////////////

			send(connectedSockfd, &sendbuf, sizeof(struct sendmsg), 0);	
		}

		close(connectedSockfd);
		close(sockfd);

	}
	
	return 0;
}
