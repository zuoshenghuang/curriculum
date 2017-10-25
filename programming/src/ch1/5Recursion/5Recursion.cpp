#include <iostream>
int fac(short n)
{
	if (n == 1)
		return 1;

	return n *  fac(n - 1);
}


int main()
{
	int v = fac(10);

	std::cout << v << std::endl;

	// fac(0); // ?

	system("pause");
	return 0;
}

