#include "Complex.h"

void test_complex()
{
	Complex c(10);
	c.show();
	std::cout << c << std::endl;
	Complex b(3, 5);
	b.show();

	Complex res = c + b;
	std::cout << res << std::endl;
}

int main()
{
	test_complex();

	system("pause");
    return 0;
}

