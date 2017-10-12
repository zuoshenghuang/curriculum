#pragma once
#include <iostream>

/**
	大小是否相等？为什么？
*/
class CCI
{
	char a;
	char b;
	int i;
};

struct CIC
{
	char a;
	int i;
	char b;
};


void show_class_size()
{
	std::cout << "size CCI:\t" << sizeof(CCI) <<std::endl;
	std::cout << "size CIC:\t" << sizeof(CIC) << std::endl;
}



#pragma pack(1)
class CCI_PACK
{
	char a;
	char b;
	int i;
};
#pragma pack(2)
class CIC_PACK_2
{
	char a;
	int i;
	char b;
};
#pragma pack()

void show_class_pack_size()
{
	std::cout << "size CCI_PACK:\t" << sizeof(CCI_PACK) << std::endl;
	std::cout << "size CIC_PACK_2:\t" << sizeof(CIC_PACK_2) << std::endl;
}
