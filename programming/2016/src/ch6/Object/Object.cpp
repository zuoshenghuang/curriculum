#include "City.h"
void test_copy()
{
	City a = City("Cambridge");
	a.setZone("England");
	City b(a);
	b.setZone("USA");	
	std::cout << a.desc() << std::endl;
	std::cout << b.desc() << std::endl;	
	City c = b;		// 调用了哪个函数？	
	std::cout << c.desc() << std::endl;	
}

void test_assgin()
{
	City a = City("Cambridge");
	a.setZone("England");

	std::cout << a.desc() << std::endl;
	City c = a;		// 调用了哪个函数？	
	std::cout << c.desc() << std::endl;
	c = a;
}

void test_noname()
{
	City("Springfield").show();
}

int getValue()
{
	int a = 5000;
	return a;
}

int main()
{
//	test_copy();
//	test_assgin();
	test_noname();

//	int v = getValue();

	system("pause");
	return 0;
}

