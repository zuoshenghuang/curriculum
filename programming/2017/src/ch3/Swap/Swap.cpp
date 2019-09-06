#include<iostream>

void swap(int a, int b)
{
	int c = a;
	a = b;
	b = c;
}

void swap_pointer(int * a, int * b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void swap_ref(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

void swap_ref_xor(int &a, int &b)
{
	a = a ^ b; b = a ^ b; a = a ^ b;
}
int main()
{
	int a = 2, b = 111;
	std::cout << "a=" << a  << std::endl;
	std::cout << "b=" << b  << std::endl;
/*
	std::cout << "--------------value----------" << std::endl;
	swap(a, b);
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;

	std::cout << "--------------pointer----------" << std::endl;
	swap_pointer(&a, &b);
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;

	// 又换回来了
	std::cout << "--------------reference----------" << std::endl;
	swap_ref(a, b);
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	*/

	std::cout << "--------------reference-xor----------" << std::endl;
	swap_ref_xor(a, b);
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;

	system("pause");

    return 0;
}

