#include<iostream>
#include<list>
#include<string>
#include "Student.h"

void test_list()
{
	std::list<std::string> strlist;
	strlist.push_back("middle");
	strlist.push_back("end");
	strlist.push_front("front");

	std::list<std::string>::iterator it = strlist.begin();
	for (; it != strlist.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}

void test_sort()
{
	std::list<int> v;
	v.push_back(23);
	v.push_back(12);
	v.push_front(76);
	v.push_front(33);
	v.sort();
	typedef std::list<int>::iterator Iter;
	
	for (Iter it = v.begin(); it != v.end(); it++)
		std::cout << *it << std::endl;
}

void test_sort_student()
{
	std::list<Student> v;
	Student a(10031, "Andy", 32, 1.75f);
	Student b(10032, "Candy", 75, 1.68f);
	v.push_back(a);
	v.push_back(b);
	v.push_front(Student(10037, "ÖÜĞÇĞÇ", 61, 1.66f));
	v.push_front(Student(10024, "²Ü²Ù", 54, 1.82f));
	v.sort();
	typedef std::list<Student>::iterator Iter;

	for (Iter it = v.begin(); it != v.end(); it++)
		it->show();
}

int main()
{
	//test_list();
	//test_sort();
	test_sort_student();
	system("pause");
    return 0;
}

