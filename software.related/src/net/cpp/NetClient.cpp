/*----------------------------------------------------------------------
	Theme :a network sample programming based on TCP
	
	Author:Standy Huang

	CreateTime:Oct/28/2006
	ModifyTime:May/16/2017
---------------------------------------------------------------------*/
#include "stdafx.h"
#include<iostream>
#include <winsock2.h>
#include <Ws2tcpip.h>
#pragma comment(lib,"Ws2_32.lib")

int main()
{
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

	SOCKET sockClient = socket(AF_INET, SOCK_STREAM, 0);
	SOCKADDR_IN addrSrv;
	inet_pton(AF_INET, "127.0.0.1",(void*)&addrSrv.sin_addr.s_addr);
	addrSrv.sin_family = AF_INET;
	addrSrv.sin_port = htons(6000);
	int status = connect(sockClient, (SOCKADDR*)&addrSrv, sizeof(SOCKADDR));
	if (status != 0)
	{
		printf("the socket cannot connect\n");
		return 0;
	}

	char sendBuf[128];
	char  recvBuf[256];

	std::cin >> sendBuf;

	recv(sockClient, recvBuf, 256, 0);
	printf("%s\n", recvBuf);

	send(sockClient, sendBuf, strlen(sendBuf) + 1, 0);

	closesocket(sockClient);
	WSACleanup();
	return 1;
	
}
//end of client