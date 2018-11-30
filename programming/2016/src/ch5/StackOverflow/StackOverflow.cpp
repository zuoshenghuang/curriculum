#include <iostream>

typedef char byte;

byte fac(byte n)
{
	if (n == 1)
		return 1;

	return fac(n - 1) * n;
}

// stack overflow
int fac(int n)
{
	if (n == 1)
		return 1;

	return fac(n - 1) * n;
}

void test_byte()
{
	byte a = 5;
	int res = fac(a);
	std::cout << res << std::endl;

	byte b = -5;
	res = fac(b);
	std::cout << res << std::endl;
}

void test_bad()
{
	int a = -5;
	int res = fac(a);
	std::cout << res << std::endl;
}


int main()
{
//	test_byte();
	test_bad();

	system("pause");
    return 0;
}

