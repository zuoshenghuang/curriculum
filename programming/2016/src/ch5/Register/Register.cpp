#include <iostream>
#include <time.h>

const int MAX_COUNT = 100000000000;
//const int MAX_COUNT = 1000000;
void test_register()
{
	clock_t start = clock();

	register int sum = 1;
	for (register int i = 1; i <= MAX_COUNT; i++)
		sum *= i;
	
	clock_t end = clock();
	std::cout << __FUNCTION__ << ":\t" << end - start << std::endl;
}
void test_mem()
{
	clock_t start = clock();

	int sum = 1;
	for (int i = 1; i <= MAX_COUNT; i++)
		sum *= i;

	clock_t end = clock();

	std::cout << __FUNCTION__ << ":\t" << end - start << std::endl;

}

void show_register_addr()
{
	register int a = 100;
	int *p = &a;			// 你的意图是什么？编译器将a退化到内存存储 
	std::cout << p << std::endl;
}

int main()
{
	test_mem();
	test_register();
	//show_register_addr();

	system("pause");
    return 0;
}

