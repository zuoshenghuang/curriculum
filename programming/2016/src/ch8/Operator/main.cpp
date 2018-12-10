#include "Circle.h"

void test_plusplus()
{
	Circle a = Circle(15);
	Circle b = a;
	
	Circle & c = ++a;
	c.show();
	std::cout << "c: " << &c << "  a: " << &a << "  b: " << &b << std::endl;
	Circle & d = b++;
	d.show();
	std::cout << "d: " << &d << "  a: " << &a << "  b: " << &b << std::endl;
}

int main()
{
	test_plusplus();
	system("pause");
    return 0;
}

