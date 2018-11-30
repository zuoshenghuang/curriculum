#include "Dinner.h"

void test_stack()
{
	Dinner breakfast("Macdonald");
	breakfast.eat();
}

void test_heap()
{
	Dinner * pLunch = NULL;
	// pLunch = new Dinner();
	// delete pLunch;
	pLunch->eat();
}

int main()
{
	test_stack();
	test_heap();
	system("pause");
    return 0;
}

