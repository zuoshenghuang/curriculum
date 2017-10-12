#include <iostream>
#include<time.h>

/*
	程序访存的局部性
	cache命中
*/
int main()
{
	const int row = 1024 * 8;
	const int col = 1024 * 8;
	int * matrix = new int [row * col];
	memset(matrix, 0, sizeof(int) * row * col);
	clock_t start = clock();
	for (int c = 0; c< col; c++)
	{
		for (int r = 0; r < row; r++)
		{
			matrix[r * col + c] ++;
		}

	}
	clock_t end = clock();
	std::cout << end - start << std::endl;

	start = end;
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			matrix[r * col + c] ++;
		}

	}
	end = clock();
	std::cout << end - start << std::endl;
	system("pause");

	return 0;
}