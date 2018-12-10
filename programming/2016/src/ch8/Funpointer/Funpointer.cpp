#include <iostream>
#include <functional>

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

void forevery(int * arr, int size, std::function<void(int *, int)> fun)
{
	fun(arr, size);
}

int main()
{
	forevery(test_array, 20, init_array);
	forevery(test_array, 20, show_every);
	std::cout << "+++++++++++++++++++++++++++++++++" << std::endl;
	forevery(test_array, 20, double_every);
	forevery(test_array, 20, show_every);

	system("pause");
    return 0;
}

