#include "Potato.h"

/*
	传值参数方式的函数调用
	将整数自增 3
*/
void add_3(int a)
{
	std::cout << "a" << "(" << &(a) << ")" << ":\t" << a << std::endl;
	a += 3;
}

void test_add_3()
{
	int x = 24;
	std::cout << "x" << "(" << &(x) << ")" << ":\t" << x << std::endl;
	add_3(x);
	std::cout << "x" << "(" << &(x) << ")" << ":\t" << x << std::endl;
}


void peel_potato(Potato p)
{
	p.peel();
}

void test_peel()
{
	Potato ob("Obama");
	ob.show();
	peel_potato(ob);
	ob.show();
}

int main()
{
//	test_add_3();
	test_peel();
	
	system("pause");
	return 0;
}

