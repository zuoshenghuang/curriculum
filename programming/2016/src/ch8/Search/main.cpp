#include "student.h"


void init_student()
{	
	students[0] = Student(10056, "Denny", 75);
	students[1] = Student(10058, "Jack Ma", 100);
	students[2] = Student(10063, "Pony ma", 88);
	students[3] = Student(10057, "周星星", 43);
}

bool find_student(int id)
{
	for (int i = 0; i < max_stu_num; i++)
	{
		if (students[i] == id)
			return true;
	}
	return false;
}

void test_find()
{
	std::string res = find_student(10068) ? "找到了" : "找不到";
	std::cout << res << std::endl;
}

void test_compare()
{
	Student & a = students[0];
	Student & b = students[3];

	std::string res = a < b ? "low" : "high";
	std::cout << a.getName() << " than " << b.getName() << "is " << res << std::endl;
}

int main()
{
	init_student();
	test_find();
	test_compare();

	system("pause");
    return 0;
}

