#include "Everyone.h"
#include "EveryoneTemplate.h"

void test()
{
	int arr[10];
	// init
	for (int i = 0; i < 10; i++)
		arr[i] = i * 2;
	// end init

	ShowMe showme;	// showme 是ShowMe类的一个对象
	Clear clr;

	for_everyone(arr, 10, showme);		// (1)
	for_everyone(arr, 8, clr);			// (2)
	for_everyone(arr, 10, ShowMe());	// (3) 和 (1)有什么差别？

	// ShowMe()是一个临时对象
}

void test_template()
{
	float arr[10];
	// init
	for (int i = 0; i < 10; i++)
		arr[i] = i + 0.7f;
	// end init

	for_everyone_t(arr, 10, Show<float>());
	for_everyone_t(arr, 5, DoubleMe<float>());
	for_everyone_t(arr, 10, Show<float>());
}

int main()
{
	test();
	test_template();
	system("pause");
    return 0;
}

