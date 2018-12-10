#include "forevery.h"

int test_array[20];

void init_array(int * arr, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = i + 1;
}

void double_every(int * arr, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] *= 2;
}

void add5_every(int * arr, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] += 5;
}

void show_every(int * arr, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << std::endl;
}
void test_every()
{
	init_array(test_array, 20);
	double_every(test_array, 20);
	add5_every(test_array, 20);
	show_every(test_array, 20);
}

void test_funtor()
{
	DoubleMe dm;
	for_every(test_array, 20, Init());	
	for_every(test_array, 20, ShowMe());
	for_every(test_array, 20, Clear23());
	for_every(test_array, 20, ShowMe());
	std::cout << "=================================" << std::endl;
	for_every(test_array, 20, dm);
	for_every(test_array, 20, ShowMe());
}
int main()
{
//	test_every();
	test_funtor();
	system("pause");
	return 0;
}
