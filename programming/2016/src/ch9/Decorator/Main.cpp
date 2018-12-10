#include "Student.h"

void testDecorator()
{
	Freshman zwl;
	std::cout << zwl.getTitle() << ":" << zwl.getStudyTime()<<std::endl;

	Monitor mzwl(zwl);
	std::cout << mzwl.getTitle() << ":" << mzwl.getStudyTime() << std::endl;

	LeagueSecretary lzwl(mzwl);
	std::cout << lzwl.getTitle() << ":" << lzwl.getStudyTime() << std::endl;

	Commissary czwl(zwl);
	std::cout << czwl.getTitle() << ":" << czwl.getStudyTime() << std::endl;

}

int main()
{
	testDecorator();
	system("pause");
    return 0;
}

