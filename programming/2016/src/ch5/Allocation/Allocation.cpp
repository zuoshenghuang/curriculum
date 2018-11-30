#include <iostream>

int *p = 0;



void test_flash(int t)
{
	int nc = 'a';
}

void test_stack()
{
	int a = 174;
	p = &a;
	std::cout << "a @: " << p << std::endl;
}
void test_heap()
{
	int * v = new int;
	*v = 674;
	p = v;
	std::cout << "v @: " << p << std::endl;
}

int main()
{
	/*test_stack();
	test_flash(45);
	std::cout << "*p = : " << *p << std::endl;
	std::cout << "p @: " << p << std::endl;
	*/
	std::cout << "---------------------------" << std::endl;
	test_heap();
	test_flash(45);

	std::cout << "*p = : " << *p << std::endl;
	std::cout << "p @: " << p << std::endl;
	delete p;
	std::cout << "*p = : " << *p << std::endl;

	system("pause");
	return 0;
}