#include "Array.h"
#include "Student.h"
#include "DataFile.h"

void test()
{
	Array<Student> students(20);

	Student a(10075, "Andy");
	Student b(21007, "Babara");
	Student c(10076, "Catty");
	Student d(30043, "Denny");
	
	a.setScore(83);
	b.setScore(75);
	c.setScore(93);
	d.setScore(55);

	students[0] = a;
	students[1] = b;
	students[2] = c;
	students[3] = d;

	a.setScore(100);
	b.setScore(100);

	students.foreveryone(1, 3, Show<Student>());
	std::cout << "-------------Double me--------------" << std::endl;
	students.foreveryone(0, 3, DoubleMe<Student>());
	students.foreveryone(1, 3, Show<Student>());
}

void test_load()
{
	Array<Student> students(10);
	DataFile df("data.csv");
	df.load(students);
	students.foreveryone(0, 9, Show<Student>());
	std::cout << "-------------Double me--------------" << std::endl;
	students.foreveryone(0, 3, DoubleMe<Student>());
	students.foreveryone(1, 3, Show<Student>());

}

int main()
{
	test_load();
	system("pause");
    return 0;
}

