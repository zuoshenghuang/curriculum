#include <iostream>
#include "Soldier.h"
#include "Killer.h"

void testSoldier()
{
	Soldier a("Tom");
	KnifeSoldier b("John");
	Sniper c("Caelly");
	GunSoldier d("Paton");

	a.attack();
	b.attack();
	c.attack();
	d.attack();

	setWhite();
}

void testKiller()
{
	setRed();
	Knife knife;
	Gun gun;
	Bomb bomb;
	AtomBomb ab;

	Killer a("÷‹–«–«");
	a.attack();
	a.equip(&gun);
	a.attack();
	a.equip(&bomb);
	a.attack();

	a.equip(&knife);
	a.attack();

	a.equip(&ab);
	a.attack();

	setWhite();
}

int main()
{
	testSoldier();
	testKiller();
	system("pause");
}

