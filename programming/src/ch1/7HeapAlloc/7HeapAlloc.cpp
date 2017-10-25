#include<iostream>

int * getArray()
{
	int * a = new int[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = 0;
	}
	return a;
}

int main()
{
	int* arr = getArray();
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << std::endl;

	}
	delete[] arr;

	system("pause");
	return 0;
}

