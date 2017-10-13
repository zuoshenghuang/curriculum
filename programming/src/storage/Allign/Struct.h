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
class CIC_PACK_1
{
	char a;
	int i;
	char b;
};
#pragma pack(2)
class CIC_PACK_2
{
	char a;
	int i;
	char b;
};

#pragma pack(4)
class CIC_PACK_4
{
	char a;
	int i;
	char b;
};
#pragma pack()

void show_class_pack_size()
{
	std::cout << "size CIC_PACK_1:\t" << sizeof(CIC_PACK_1) << std::endl;
	std::cout << "size CIC_PACK_2:\t" << sizeof(CIC_PACK_2) << std::endl;
	std::cout << "size CIC_PACK_4:\t" << sizeof(CIC_PACK_4) << std::endl;
}
