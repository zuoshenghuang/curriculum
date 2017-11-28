#include "Potato.h"

void peel_potato_const(const Potato & p)
{
	//	p.peel();
}

void Potato::changeName(std::string n) const
{
//		name = n;
}

void test_const()
{
	Potato ob("Obama");

	peel_potato_const(ob);

	ob.changeName("Trump");
}

void test_assign()
{
	Potato a("Obama");
	Potato b("Trump");
	b = a;
//	Potato c = a;
}

void test_assign_agin()
{
	Potato a("Obama");
	Potato b("Trump");
	Potato x = (b = a);	// 不会有问题
	Potato y = b = a;	// 不会有问题
	x = b = a;			// 有问题，根源是什么？
}

int main()
{
//	test_assign();
	test_assign_agin();

	system("pause");
    return 0;
}

