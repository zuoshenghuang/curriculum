#include <iostream>

void test_float()
{
	float a = 3.14159265f;

	std::cout << "float a = " << a << std::endl;
	std::cout << "sizeof(float) = " << sizeof(float) << std::endl;

	double b = 3.1415926535798932;

	std::cout << "double b = " << b << std::endl;
	std::cout << "sizeof(float) = " << sizeof(b) << std::endl;
}

int main()
{
	test_float();

	system("pause");
    return 0;
}

