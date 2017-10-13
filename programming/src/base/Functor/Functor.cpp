#include <iostream>
#include "Condition.h"
#include "Pointer.h"

class Power
{
public:
	int operator()(int m, int n)
	{
		int res = 1;
		for (int i = 0; i < n; i++)
			res *= m;

		return res;
	}
};

void test_functor()
{
	int m = 2, n = 3;
	Power power;
	int value = power(m, n);
	std::cout << value << std::endl;
}

void test_show_by_condition()
{
	LT10 lessthanten;

	const int COUNT = 50;
	int a[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		a[i] = i - 25;
	}

	//show_by_condition(a, COUNT, lessthanten);
	//show_by_condition(a, COUNT, Even());
	//show_by_condition(a, COUNT, MT21());
}

void test_pointer()
{
	int(*pFunc)(int); // º¯ÊýÖ¸Õë
	pFunc = add_5;

	int a = pFunc(1321);
	std::cout <<a << std::endl;
	
	pFunc = power_3;
	a= pFunc(4);

	std::cout << a << std::endl;
}

int main()
{
	test_functor();

	test_show_by_condition();

	test_pointer();

	system("pause");
	return 0;
}

