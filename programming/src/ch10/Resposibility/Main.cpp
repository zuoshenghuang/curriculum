#include "Leader.h"

void testResponsibility()
{
	Task t1(1007354, Task::Level::LEVEL_LOW, "I apply for a Three days vacation");
	Task t2(2004781, Task::Level::LEVEL_IMPORTANT, "i need more bonus");
	Task t3(1004383, Task::Level::LEVEL_HIGH, "i want  deliver a version will fatal bug ");
	Task t4(1000397, Task::Level::LEVEL_FATAL, "i want to explode with a bomb");

	Manager m("Huang");
	Director d("Bush");
	VP v("Lee");
	Boss b("Trump");

	m.setMyLeader(&d);
	d.setMyLeader(&v);
	v.setMyLeader(&b);
	b.setMyLeader(NULL);

	m.handle(t1);
	d.handle(t3);
	v.handle(t4);
	b.handle(t3);

}

int main()
{
	testResponsibility();
	system("pause");

    return 0;
}

