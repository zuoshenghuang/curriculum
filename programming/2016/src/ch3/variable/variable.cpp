#include <iostream>

/**
	Debug/Release下结果不同；
	x64/x86环境下也不同。
*/
void test_int()
{
	int a = 13, b = 25;
	int * pa = &a;
	int ** ppa = &pa;	
	std::cout << "size a:" << sizeof(a) << "\t and size pa:" << sizeof(pa) << std::endl;
	std::cout << "a=" << a << "\tand a's address is:" << pa << std::endl;
	std::cout << "b=" << b << "\tand b's address is:" << &b << std::endl;
	std::cout << "ppa=" << ppa << "\tand PA's address is:" << ppa << std::endl;
	std::cout << "distance between a and b:" << (&b) - pa << std::endl;
	std::cout << "distance between a and b:" << (int)(&b) - (int)pa << std::endl;
	std::cout << "distance between a and b:" << int(ppa) - (int)(&b) << std::endl;
}

void test_char()
{
	char c = 't';
	char * pc = &c;
	std::cout << "size c:" << sizeof(char) << "\t and size pc:" << sizeof(pc) << std::endl;
	std::cout << "c=" << c << "\tand c's address is:" << pc << std::endl;
	std::cout << "c=" << c << "\tand c's address is:" << (int)pc << std::endl;

}
int main()
{
	test_int();
	std::cout << "----------------------------" << std::endl;
	test_char();

	system("pause");
    return 0;
}

