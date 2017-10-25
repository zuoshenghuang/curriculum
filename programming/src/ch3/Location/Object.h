#pragma once
#include <iostream>
#include <string>
class Object
{
public:
	Object(std::string n) : name(n) {}
	void show()
	{
		std::cout << "Object name is:\t" << name << std::endl;
	}
private:
	std::string name;
};