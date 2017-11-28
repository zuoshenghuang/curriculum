#include <iostream>
#include <string>
#include "Student.h"
#include <vector>
void test_simple()
{
	// int vector
	std::vector<int> vec;
	vec.push_back(57);
	vec.push_back(62);
	for (int i = 0; i < 10; i++)
		vec.push_back(i);

	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << std::endl;

	// string vector
	std::vector<std::string> a;
	a.push_back("test");
	a.push_back("string");
	a.push_back("ok");
	for (int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
}

void test_deep()
{
	std::vector<int> v;
	v[0] = 10;
	v[1] = 2;			// 会出问题的
	v[2] = 56;
}

void test_analyze()
{
	std::vector<int> v;
	for (int i = 1; i <= 32; i++)
	{
		v.push_back(i);
		std::cout << "after push" << i << "capacity v is " << v.capacity() << std::endl;
	}
}

void test_student()
{
	std::cout << "start --------------" << std::endl;
	Student a(10031, "Andy", 32, 1.75f);
	Student b(10032, "Candy", 75, 1.68f);
	std::vector<Student> v;
	v.push_back(a);
	v.push_back(b);
	for (int i = 0; i < v.size(); i++)
		v[i].show();

	std::vector<Student *> vp;
	vp.push_back(&a);
	vp.push_back(&b);
	for (int i = 0; i < v.size(); i++)
	{
		if (vp[i] != nullptr)
			vp[i]->show();
	}
}



int main()
{
	//test_simple();
	//test_deep();
	//test_analyze();
	test_student();

	system("pause");
    return 0;
}

