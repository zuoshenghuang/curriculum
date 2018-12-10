#include <iostream>
#include <windows.h>
#include <cmath>
class RedShow
{
public:
	void operator()()
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
	}
};

class PowerOpearation
{
public:
	int operator()(int a, int b)
	{
		return std::pow(a, b);
	}
};

void test_color()
{
	RedShow red;
	red();
	std::cout << "OK ?" << std::endl;
}

void test_power()
{
	int a = 5, b = 3;
	PowerOpearation power;
	int res = power(a, b);

	std::cout << res << std::endl;

}
int main()
{
	test_color();
	test_power();
	system("pause");
    return 0;
}

