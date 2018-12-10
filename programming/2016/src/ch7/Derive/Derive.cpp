#include "animal.h"

void putin(Animal a)
{
	a.show();
}

void putref(Animal & a)
{
	a.show();
}
void test_animal()
{
	Dog d = Dog("Snoopy");
	d.show();

	Parrot p = Parrot("Polly");
	p.show();

	Animal * a = &p;
	a->show();

	putin(p);

	putref(d);
}

int main()
{
	test_animal();
	system("pause");
    return 0;
}

