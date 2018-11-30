#include <iostream>
#include "Auto.h"

#define NULL 0
#ifndef _SAFE_DEL
#define _SAFE_DEL(p) { if(p){delete(p);  (p)=NULL;} }
#endif

#ifndef _SAFE_DEL_ARRAY
#define _SAFE_DEL_ARRAY(p) { if(p){delete[] (p);  (p)=NULL;} }
#endif

void safe_del(void *p)
{
	if (nullptr != p)
	{ 
		delete p;
		p = nullptr;
	}
}

void safe_del_array(void *p)
{
	if (nullptr != p)
	{
		delete [] p;
		p = nullptr;
	}
}

void test()
{
	int * p = new int[100];
	int * q = p;
	int * r = q;

	for (int i = 0; i < 100; i++)
	{
		p[i] = i;
	}
//	delete[] p;
//	delete[] q;
	safe_del_array(p);
}

void test_auto()
{
	
	Array<char> ac(10);
	ac[6] = 'f';
	std::cout << ac[6] << std::endl;
	std::cout << ac[2] << std::endl;
	std::cout << ac[11] << std::endl;

	const int COUNT = 25;
	Array<int> ai(COUNT);
	for (int i = 0; i < COUNT; i++)
		ai[i] = i * 2;

	for (int i = 0; i < COUNT; i++)
		std::cout << ai[i] << " ";

	std::cout << std::endl;
	
}
int main()
{
	//test();
	test_auto();

	system("pause");
    return 0;
}

