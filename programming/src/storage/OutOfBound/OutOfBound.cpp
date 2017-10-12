#include <iostream>

void test()
{
	char a[5] = { 'a','b','c','d', 0 };
	char b[3] = { 'x', 'y', 0 };
	char * str = a;
	str[4] = 'e';
	str[5] = 'f';
	str[6] = 'g';
	str[7] = 0;
	std::cout << "str :" << str << std::endl;
	std::cout << "a :" << a << std::endl;
	std::cout << "b :" << b << std::endl;
}

struct Happy
{
	char a[5] = { 'a','b','c','d', 0 };
	char b[3] = { 'x', 'y', 0 };

	void show()
	{
		char * str = a;
		str[4] = 'e';
		str[5] = 'f';
		str[6] = 'g';
		str[7] = 0;
		std::cout << "str :" << str << std::endl;
		std::cout << "a :" << a << std::endl;
		std::cout << "b :" << b << std::endl;
	}
};

int main()
{	
	//test();
	//Happy h;
	//h.show();

	system("pause");
    return 0;
}