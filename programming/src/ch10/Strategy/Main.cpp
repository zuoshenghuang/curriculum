#include "Exam.h"

void testStrategy()
{

	Student tom;
	tom.useStrategy(& FakeExam());
	tom.pass();

	tom.useStrategy(& ReviewHardly());
	tom.pass();
}
int main()
{
	testStrategy();
	system("pause");
    return 0;
}

