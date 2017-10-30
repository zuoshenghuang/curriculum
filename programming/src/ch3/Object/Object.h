#pragma once
#include <iostream>
#include <string>

class Object
{
public:
	Object() { name = "Empty"; }

	Object(std::string n) : name(n) {}

	~Object()
	{
		std::cout << name << "\t-----------------------------------goodbye !" << std::endl;
	}

	void show() { std::cout << name << "\tat\t" << this << std::endl; }
private:
	std::string name;
	// ...
};

void test_object()
{
	Object a, b("Cambridge"), c(b);
	Object d = Object("Harbin");

	a.show();
	b.show();
	c.show();
	d.show();

	Object("Kyoto");			// 不俱名的临时对象
	Object("Tokyo").show();		// 不俱名的临时对象	
}

Object * pObject = NULL;
void heap_object()
{
	pObject = new Object("Anywhere");
	pObject->show();
}

void heap_destruct()
{
	if (NULL == pObject)
		return;

	delete pObject;
	pObject = NULL;
}

void test_heap()
{
	heap_object();
	heap_destruct();
}
