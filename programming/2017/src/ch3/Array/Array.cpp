#include <iostream>


void test_array_char()
{
	char arr[5];
	std::cout << "arr[0]:" <<(int)&arr[0]<< std::endl;
	std::cout << "arr[1]:" <<(int)&arr[1] << std::endl;
	std::cout << "arr:" << (int)arr << std::endl;
}

/*
	x64和x86会有差别
*/
void test_array_int()
{
	int arr[5];
	std::cout << "arr[0]:" << (int)&arr[0] << std::endl;
	std::cout << "arr[1]:" << (int)&arr[1] << std::endl;
	std::cout << "arr:" << (int)arr << std::endl;
}
int main()
{
	test_array_char();
	std::cout << "----------------" << std::endl;
	test_array_int();
	system("pause");
    return 0;
}

