#pragma once
#pragma once

#include <iostream>
#include <string>

class Dinner
{
public:
	Dinner(std::string n) : name(n) {}

	void eat()
	{
		std::cout << "we are eating at:\t" << name << std::endl;
	}

private:
	void * operator new(size_t size) {}

	void operator delete(void * p) {}

	void * operator new[](size_t size) {}

	void operator delete[](void * p) {}

	std::string name;
};