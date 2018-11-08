#include <iostream>

void test_fun_val(int v)
{
	std::cout << "v=" << v << "\tand v's address is:" << &v << std::endl;
}

void test_fun_ref(int & v)
{
	std::cout << "v=" << v << "\tand v's address is:" << &v << std::endl;
}

int main()
{
	int a = 30;
	std::cout << "a=" << a << "\tand a's address is:" << &a << std::endl;
	test_fun_val(a);
	std::cout << "----------------------------------------" << std::endl;
	test_fun_ref(a);

	system("pause");
    return 0;
}

