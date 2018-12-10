#include "Iterator.h"
#include <iostream>
#include <string>
#include <vector>

void testIterator()
{
	Array<int> a(10);
	for (int i = 0; i < 10; i++)
	{
		a[i] = i * 2;
	}

	Iterator<int> * iter = a.begin();
	while (iter->hasNext())
	{
		std::cout << iter->next() << std::endl;
	}

	delete iter;
}

int main()
{
	testIterator();
	system("pause");
    return 0;
}

