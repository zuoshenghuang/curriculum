#include "vehicle.h"
#include "animal.h"

void test_move()
{
	Movable & frog = Frog();
	Movable & car = Car();
	
	car.move();
	frog.move();
}

void test_animal()
{
	WildGoose & wg = WildGoose();
	Penguin & pg = Penguin();
	
	wg.fly();
	wg.swim();
	pg.fly();
	pg.swim();
}

int main()
{
//	test_move();
	test_animal();

	system("pause");
    return 0;
}

