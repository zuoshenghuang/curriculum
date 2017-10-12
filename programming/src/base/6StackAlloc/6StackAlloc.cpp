#include <iostream>

int add(int a, int b)
{
	int v = a + b;
	return v;
}

char* getStr()
{
	char * test = "test";
	return test;
}

char* getStrA()
{
	char test[] = "test";
	return test;
}

int * getArray()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = 0;
	}
	return a;
}

int main()
{
	int a = 10, b = 13;
	int sum = add(a, b);
	std::cout << sum << std::endl;

	char * str = getStrA();
	std::cout << str << std::endl;

	int* arr = getArray();
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << std::endl;

	}
	system("pause");
	return 0;
}

