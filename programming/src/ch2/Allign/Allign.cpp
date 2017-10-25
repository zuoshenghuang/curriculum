#include<iostream>
#include "Struct.h"

void show_size()
{
	char c = 'a';
	std::cout <<"size char:\t" << sizeof(c) << std::endl;
	std::cout <<"size short:\t"<< sizeof(short) <<std::endl;
	std::cout <<"size int:\t" << sizeof(int) << std::endl;
}

int main()
{
//	show_size();
//	show_class_size();
	show_class_pack_size();

	system("pause");
    return 0;
}