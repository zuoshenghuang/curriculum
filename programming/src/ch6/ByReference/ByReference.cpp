#include "Potato.h"

void peel_potato(Potato & p)
{
	p.peel();
}


void test_peel()
{
	Potato ob("Obama");
	ob.show();
	peel_potato(ob);
	ob.show();
}

int main()
{
	test_peel();
	system("pause");
    return 0;
}

