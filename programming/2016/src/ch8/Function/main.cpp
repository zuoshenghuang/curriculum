#include <iostream>
#include "functor.h"

bool more_than(int v, int m)
{
	return v > m;
}

void test_more_than()
{
	const char * res = more_than(1000, 1200) ? "大于" : "不大于";
	std::cout << res << std::endl;
}

void test_functor()
{
	MoreThan mt100 = MoreThan(100);
	const char * res = mt100(5000) ? "大于100" : "不大于100";
	std::cout << res << std::endl;
}

int main()
{
//	test_more_than();
	test_functor();

	system("pause");
	return 0;
}