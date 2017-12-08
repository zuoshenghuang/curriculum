#include "Movable.h"

void testProxy()
{
	Driver d;
	d.move();

	Car car;
	d.drive(&car);
	d.move();
}

int main()
{
	testProxy();
	system("pause");
    return 0;
}

