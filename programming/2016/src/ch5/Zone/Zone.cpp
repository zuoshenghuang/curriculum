#include <iostream>

int max;
const float pi = 3.1415926;

int main()
{
	static int sum;
	char * first = "abcdefg";
	char * second = "abcdefg";
	char third[] = "abcdefg";
	sum = 100;
	max = 25;

	std::cout << "first @: " << (int *)first << std::endl;
	std::cout << "second @: " << (int *)second << std::endl;
	std::cout << "pi @: " << (int *)&pi << std::endl;

	std::cout << "third @: " << (int *)third << std::endl;
	std::cout << "max @: " << (int *)&max << std::endl;
	std::cout << "sum @: " << (int *)&sum << std::endl;

	// ³£Á¿Çø²âÊÔ
	
	char * p = first;
	p = third;

	p[2] = 'x';
	std::cout << "third = " << third << std::endl;
	
	system("pause");
	return 0;
}