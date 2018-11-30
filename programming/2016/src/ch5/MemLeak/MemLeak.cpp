#include <iostream>

#ifndef _SAFE_DEL
#define _SAFE_DEL(p) { if(p){delete(p);  (p)=NULL;} }
#endif


#ifndef _SAFE_DEL_ARRAY
#define _SAFE_DEL_ARRAY(p) { if(p){delete[] (p);  (p)=NULL;} }
#endif

void safe_del_array(void * p)
{
	if (NULL == p)
		return;

	delete[] p;
	p = NULL;
}

void no_delete()
{
	int * p = new int[100];

	for (int i = 0; i < 100; i++)
	{
		p[i] = i;
	}
}

void more_delete()
{
	int * p = new int[100];
	int * q = p;

	for (int i = 0; i < 100; i++)
	{
		q[i] = i;
	}

	delete p;
	delete p;
}

void use_safe_delete()
{
	int * p = new int[100];

	for (int i = 0; i < 100; i++)
	{
		p[i] = i;
	}

	safe_del_array(p);
	safe_del_array(p);

	//safe_del_array(p);
	//safe_del_array(p)
}

int main()
{
	//no_delete();
	//more_delete();
	use_safe_delete();
	system("pause");
    return 0;
}

