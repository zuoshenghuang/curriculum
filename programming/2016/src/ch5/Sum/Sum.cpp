#include <iostream>

/**
	请大家仔细看看这些变量的位置
*/
int sum(int a, int b)
{
	int c = a + b;
	int d = c;

	std::cout << "----SUM FUNCTION-----" << std::endl;
	std::cout << (&a) << "\t" << (&b) << "\t" << (&c) << "\t" << (&d) << std::endl;

	return c;
}

void test_add()
{
	std::cout << "----ADD FUNCTION----" << std::endl;

	int a = 13, b = 7;
	int c = a + b;

	std::cout << (&a) << "\t" << (&b) << "\t" << (&c) << "\t" << std::endl;

}

void test_sum()
{
	int x = 20, y = 30;
	int s = sum(x, y);

	std::cout << "----X, Y, S-----" << std::endl;
	std::cout << (&x) << "\t" << (&y) << "\t" << (&s) << "\t" << std::endl;
}

int main()
{
//	test_add();
	test_sum();

	system("pause");
    return 0;
}

