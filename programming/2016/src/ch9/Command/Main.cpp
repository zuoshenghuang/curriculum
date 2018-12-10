#include "Command.h"

void testCommand()
{
	Programmer p;
	RoutineCommand rc(&p);

	Manager m;
	m.setCommand(&rc);
	m.act();

}

int main()
{
	testCommand();
	system("pause");
    return 0;
}

