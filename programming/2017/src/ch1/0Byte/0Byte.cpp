#include <iostream>

typedef signed char byte;
typedef unsigned char ubyte;

void test_byte()
{
	byte a = 0xFF;
	byte b = 0x7F;
	byte c = 0x80;
	ubyte ua = 0xFF;
	ubyte ub = 0x7F;
	ubyte uc = 0x80;
	std::cout << "s 0xFF = " << (int)a << std::endl;
	std::cout << "s 0x7F = " << (int)b << std::endl;
	std::cout << "s 0x80 = " << (int)c << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "u 0xFF = " << (int)ua << std::endl;
	std::cout << "u 0x7F = " << (int)ub << std::endl;
	std::cout << "u 0x80 = " << (int)uc << std::endl;
}


void test_swap()
{
	int a = 10;
	int b = 21;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	std::cout << a << " " << b << std::endl;
}

void test_swap_by_add()
{
	int a = 10;
	int b = 21;

	a = a + b;
	b = a - b;
	a = a - b;
	std::cout << a << " " << b << std::endl;
}

int fac(byte n)
{
	if (n == 1)
		return 1;

	return  fac(n - 1) * n;
}

void test_fac()
{
	int w = fac(-1);
	int v = fac(4);
	std::cout << w << std::endl;
	std::cout << v << std::endl;
}

int main()
{
	test_byte();
	test_swap_by_add();
//	test_swap();
	
//	test_fac();

	system("pause");
	return 0;
}