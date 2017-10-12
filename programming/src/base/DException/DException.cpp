#include <iostream>

double DividedBy(int a, int b)
{
	if (b == 0)
	{
		throw "Exception: divisor is 0";
	}

	return double(a / b);
}

/*
*/
int accumulate(int arr[], int size)
{
	int result = 0;
	for (int i =0; i<size; i++ )
	{
		if (arr[i] > 100 || arr[i] < -100)
		{
			throw 0;
		}

		result += arr[i];
	}
}

int main()
{
	// 除0检测
	try
	{
		double res = DividedBy(51, 0);
		std::cout << "result is:\t" << res << std::endl;
	}
	catch (const char * exception)
	{
		std::cout << "result is:\t" << exception << std::endl;
	}

	// 没有做异常处理的 除法运算
	try
	{
		float m = 0;
		double res = 5.1 / m;
	}
	catch (...)
	{
		std::cout << "some exception" << std::endl;
	}

	// 返回的最小值对吗？
	int arr[5] = {-13, 7, 13, 1154, 27};
		// 用异常处理来确认
	try
	{
		int sum = accumulate(arr, 5);
		std::cout << "sum is:\t" << sum << std::endl;
	}
	catch (int e)
	{
		if(e == 0)
			std::cout << "some value is exceptional" << std::endl;
	}

	system("pause");
	return 0;
}

