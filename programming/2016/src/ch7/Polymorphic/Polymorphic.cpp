#include "animal.h"

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

	putref(d);
}

void test_bird()
{
	Bird pen = Penguin("Sum");
	Bird par = Parrot("Polly");

	pen.canfly();
	par.canfly();
}

void test_bird_ref()
{
	Bird & pen = Penguin("Sum");
	Bird & par = Parrot("Polly");

	pen.canfly();
	par.canfly();
}
void test_bird_pointer()
{
	Bird * p = & Penguin("Sum");
	p->canfly();
	Parrot polly = Parrot("Polly");
	p = &polly;
	p->canfly();
}
int main()
{
	//test_animal();
	//test_bird();
	std::cout << "====================" << std::endl;
	//test_bird_ref();
	std::cout << "++++++++++++++++++++" << std::endl;
	test_bird_pointer();

	system("pause");
    return 0;
}

