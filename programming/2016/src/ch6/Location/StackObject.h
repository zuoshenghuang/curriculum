#pragma once
#include <iostream>
#include <string>

class StackObject
{
public:
	StackObject(std::string n) : name(n) {}
	void show()
	{
		std::cout << "Statck Object name is:\t" << name << std::endl;
	}

private:
	void * operator new(size_t size){}

	void operator delete(void * p) {}

	void * operator new[](size_t size) {}

	void operator delete[](void * p) {}

	std::string name;
};