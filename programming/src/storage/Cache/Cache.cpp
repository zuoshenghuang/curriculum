#include <iostream>
#include<time.h>

/*
	程序访存的局部性
	cache命中
*/
void row_access(int * matrix, int row, int col)
{
	clock_t start = clock();

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			matrix[r * col + c] ++;
		}
	}

	clock_t end = clock();
	std::cout << __FUNCTION__ << ":\t" << end - start << std::endl;
}

void col_access(int * matrix, int row, int col)
{
	clock_t start = clock();

	for (int c = 0; c< col; c++)
	{
		for (int r = 0; r < row; r++)
		{
			matrix[r * col + c] ++;
		}
	}

	clock_t end = clock();
	std::cout << __FUNCTION__ <<":\t" <<end - start << std::endl;
}

int main()
{
	const int row = 1024 * 8;
	const int col = 1024 * 8;
	int * mat = new int [row * col];
	memset(mat, 0, sizeof(int) * row * col);

	row_access(mat, row, col);
	col_access(mat, row, col);


	system("pause");

	return 0;
}