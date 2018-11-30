#pragma once
#include <iostream>
#include <string>

class Stay
{
public:
	void show()
	{
		std::cout << "We stay at:\t" << name << std::endl;
	}

	static Stay * provideMe(std::string name)
	{
		return new Stay(name);
	}

	static void distroy(Stay * p)
	{
		if (p != NULL)
			delete p;
	}


private:
	Stay() {}
	Stay(std::string n) : name(n) {}

	std::string name;
/*	
	void * operator new(size_t size)
	{
		return malloc(size);
	}

	void operator delete(void * p)
	{
		free(p);
	}
*/
};