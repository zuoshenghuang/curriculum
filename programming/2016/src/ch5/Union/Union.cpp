#include <iostream>

union A
{

	int size;
	char flag;
};

union B
{
	char flag;
	int size;
};

void test_addr()
{
	A a;
	std::cout << "addr a.flag:\t" << (int) &a.flag << std::endl;
	std::cout << "addr a.size:\t" << (int) &a.size << std::endl;
}
void test_union()
{
	A  a; B b;
	a.size = 98;
	b.flag = 'a';

	std::cout << "a.flag:\t" << a.flag << std::endl;
	std::cout << "a.size:\t" << a.size << std::endl;

	std::cout << "b.flag:\t" << b.flag << std::endl;
	std::cout << "b.size:\t" << b.size << std::endl;
}

void test_size()
{
	std::cout << "sizeof(A):\t" << sizeof(A) << std::endl;
	std::cout << "sizeof(B):\t" << sizeof(B) << std::endl;
}

void checkEndian()
{
	union MyUnion {
		int a;
		char c;
	}test;
	test.a = 1;
	if (test.c == 1)
		std::cout << "little endian" << std::endl;
	else 
		std::cout << "big endian" << std::endl;
}



int main()
{
	test_addr();
	test_size();
	test_union();
	checkEndian();
	system("pause");
    return 0;
}

