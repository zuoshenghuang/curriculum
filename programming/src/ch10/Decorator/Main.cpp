#include "Student.h"

void testDecorator()
{
	Freshman zwl;
	//std::cout << a.getTitle() << ":" << a.getStudyTime()<<std::endl;

	Monitor m(zwl);
	std::cout << m.getTitle() << ":" << m.getStudyTime() << std::endl;

	LeagueSecretary l(m);
	std::cout << l.getTitle() << ":" << l.getStudyTime() << std::endl;

	Commissary c(zwl);
	std::cout << c.getTitle() << ":" << c.getStudyTime() << std::endl;

}

int main()
{
	testDecorator();
	system("pause");
    return 0;
}

