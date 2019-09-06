#include <iostream>
/*
	一些数组方面的sizeof
*/

int id[16];
char name[5];

void test_size()
{	
	std::cout << "sizeof(id)\t" << sizeof(id) << std::endl;
	std::cout << "sizeof(name)\t" << sizeof(name) << std::endl;
}

void test_para_empty(char para [])
{
	std::cout << "sizeof(para)\t" << sizeof(para) << std::endl;
}

//void test_para_mul(char para[64])
void test_para_mul(char * para)
{
	std::cout << "sizeof(para64)\t" << sizeof(para) << std::endl;
}

int main()
{
	test_size();
	test_para_empty(name);

//	char para64in[64];
//	std::cout << "sizeof(para64in)\t" << sizeof(para64in) << std::endl;

//	test_para_mul(para64in);

	system("pause");
    return 0;
}

