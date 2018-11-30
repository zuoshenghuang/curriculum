#include <iostream>

class Before
{
public:
	Before()
	{
		std::cout << __FUNCTION__ << std::endl;
		std::cout << "hello everyone" << std::endl;
	}
};

Before b;
int main()
{
	std::cout << "main start" << std::endl;
	system("pause");
    return 0;
}

