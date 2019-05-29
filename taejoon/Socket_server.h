#pragma comment(lib,"ws2_32.lib")
#pragma once
#include <iostream>
#include <WinSock2.h>

using namespace std;

class Socket_server
{
private:
	WSADATA data;
	SOCKET server, client;
	sockaddr_in addr = { 0 };

public:
	void connection();

};