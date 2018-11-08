#include <iostream>

void test_assign()
{
	int a = 34;
	int b = a;

	std::cout << "a=" << a << "\tand a's address is:" << &a << std::endl;
	std::cout << "b=" << b << "\tand b's address is:" << &b << std::endl;
}

void test_ref()
{
	int c = 37;
	int & d = c;

	std::cout << "c=" << c << "\tand c's address is:" << &c << std::endl;
	std::cout << "d=" << d << "\tand d's address is:" << &d << std::endl;
}

int main()
{
	test_assign();
	std::cout << "----------------------------------" << std::endl;
	test_ref();

	system("pause");
    return 0;
}

