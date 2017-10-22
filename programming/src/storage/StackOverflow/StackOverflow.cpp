#include <iostream>

/*
	求阶乘
	栈溢出测试
*/
int factorial(int n)
{
	if (n == 1)
		return 1;

	return factorial(n - 1) * n;
}

/*
	fibonacci数列
*/
int fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;

	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	//int a1 = factorial(10);
	// int a2 = factorial(0);
	int a3 = factorial(-1);
	int a4 = factorial(6000);
	//int a5 = factorial(750000);

	int v = a4;
	std::cout << v << std::endl;
	system("pause");
    return 0;
}

