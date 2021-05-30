#include"tcpClinet.hpp"
void Usage(std::string proc)
{
	std::cout << "Usage: \n" << "\t";
	std::cout << proc << "svr_ip svr_port" << std::endl;
}


int main(int argc,char *argv[])
{
	if (argc£¡ = 3) {
		Usage(argv[0]);
		exit(1);
	}
	tcpClient* tc = new tcpClient(argv[1],toi(argv[2]));
	tc->initClient();
	tc->start();
	return 0;
}