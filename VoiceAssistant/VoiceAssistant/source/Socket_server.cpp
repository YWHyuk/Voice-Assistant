#include "../header/Socket_server.h"
/*
void Socket_server::connection()
{
	WSAStartup(MAKEWORD(2, 2), &data);
	server = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (server = INVALID_SOCKET)
	{
		cout << "socket create fail" << endl;
	}

	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(23000);

	if (bind(server, (sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR)
	{
		cout << "binding fail" << endl;
	}
	if (listen(server, SOMAXCONN) == SOCKET_ERROR)
	{
		cout << "listen fail" << endl;
	}
	cout << "connectting..." << endl;
	client = accept(server, NULL, NULL);

	closesocket(client);
	closesocket(server);
	WSACleanup();
}
*/