#include <iostream>

typedef char byte;
void test()
{
	byte a = 125;
	byte b = 8;
	byte sum = a + b;
	std::cout << "sum = " << (int)sum << std::endl;

	
	for (byte i = 1; i <= 8; i++)
	{
		byte res = a + i;
		std::cout << "a +" << (int)i << "= " << int(res) << std::endl;
	}
	
}
int main()
{
	test();
	system("pause");
    return 0;
}

