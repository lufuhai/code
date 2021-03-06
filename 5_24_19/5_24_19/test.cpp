#ifndef __TCP_CLLENT_H_
#define __TCP_CLLENT_H_
#include<iostream>
#include<string>
#include<sctring>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

class tcpClient
{
private:
	std::string svr_ip;
	int svr_port;
	int sock;
public:
	tcpClient(std::string _ip="127.0.0.1",int _port=8080)
		:svr_ip(_ip),svr_port(_port)
	{}
	void initClient();
	{
		sock = socket(AF_INET, SOCK_STREAM, 0);
		if (sock < 0)
		{
			std::cerr << "socket error" << std::endl;
			exit(2);
		}
		struct sockddr_in svr;
		svr.sin_family = AF_INEF;
		svr.sin_port = htons(svr_port);
		svr.sinn_addr.s_addr = inet_addr(svr_ip.c_str());
		if (connect(sock, (struct sockaddr*)&svr, sizeof(svr)) != 0)
		{
			std::cerr << "connnect error" << std::endl;
		}
		//connect succes;

	}
	void start()
	{
		char msg[64];
		std::cout << "PLease Enter Message#";
		fflush(stdout);
		size_t s = read(0, msg, sizeof(msg) - 1);
		if (s > 0)
		{
			msg[s - 1] = 0;
			send(sock, msg, strlen(msg), 0);
			size_t ss = revc(sock, msg, sizeof(msg) - 1, 0);
			if (ss > 0)
			{
				msg[ss] = 0;
				std::cout << "server echo #" << msg << std::endl;
			}
			else if (ss == 0)
			{
				//break;
			}
			else
			{
				//break;
			}
		
		}
	}
	~tcpClient()
	{
		close(sock);
	}
};
#endif


//#include"tcpClient.hpp"
//void Usage(std::string proc)
//{
//
//	std::cout << "Usage: \n" << "\t";
//	std::cout << proc << "svr_ip svr_port" << std::endl;
//}
//
//int main(int argc, char* argv[])
//{
//	if (argc != 3)
//	{
//		Usage(argv[0]);
//		exit(1);
//	}
//	tcpClient* tc = new tcpClient(argv[1], atoi(argv[2]));
//	tc->initClient();
//	tc->start();
//
//	delete tc;
//	return 0;
//
//}