/*----------------------------------------------------------------------
	Theme :a network sample programming based on TCP
	
	Author:Standy Huang

	CreateTime:Oct/28/2006
	ModifyTime:May/16/2017
---------------------------------------------------------------------*/
#include "stdafx.h"
#include <winsock2.h>
#include <Ws2tcpip.h>
#pragma comment(lib,"Ws2_32.lib")

int main()

{
	//load  socket library

	WORD wVersionRequested;
	WSADATA wsaData;
	int   err;
	wVersionRequested = MAKEWORD(1, 1);
	err = WSAStartup(wVersionRequested, &wsaData);
	if (err != 0)
		return -1;

	if (LOBYTE(wsaData.wVersion) != 1 || HIBYTE(wsaData.wVersion) != 1)
	{
		WSACleanup();
		return -1;
	}

	// Create the socket for listen

	SOCKET sockSrv = socket(AF_INET, SOCK_STREAM, 0);
	SOCKADDR_IN addrSrv;
	addrSrv.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	addrSrv.sin_family = AF_INET;
	addrSrv.sin_port = htons(6000);
	//bind the socket to the server
	bind(sockSrv, (SOCKADDR*)&addrSrv, sizeof(SOCKADDR));
	listen(sockSrv, 5);
	SOCKADDR_IN addrClient;
	int len = sizeof(SOCKADDR);

	while (1)
	{
		//wait for a certain client visiting
		SOCKET sockConn = accept(sockSrv, (SOCKADDR*)&addrClient, &len);
		char sendBuf[100];

		char client_ip[32];
		memset(client_ip, 0, 32);

		inet_ntop(AF_INET, &addrClient.sin_addr, client_ip, 16);
		sprintf_s(sendBuf, "Welcome%s  here\n", client_ip);

		//send data to client
		send(sockConn, sendBuf, strlen(sendBuf) + 1, 0);
		char recvBuf[128];
		memset(recvBuf, 0, 128);
		
		//receive data from client
		recv(sockConn, recvBuf, 100, 0);
		printf("%s\n", recvBuf);

		//shutdown the socket
		closesocket(sockConn);
	}
	return 1;
}
//end of server
