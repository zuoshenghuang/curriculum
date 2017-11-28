#include <iostream>
#include "Student.h"

void Student::show() const
{
	std::cout << id << "," << name << std::endl;
}

void Student::changeID(int i)const
{
//	id = i;
}

void Student::changeName(const std::string & n) const
{
	name = n;		// 可以更改，即便是const函数
}

void test_mutable()
{
	Student a(10084, "Andy");
	Student b(73005, "Babara");
	a.show();
	b.show();
	a.changeID(10071);
	b.changeName("Mary");
	a.show();
	b.show();
}

int main()
{
	test_mutable();
	system("pause");
    return 0;
}

