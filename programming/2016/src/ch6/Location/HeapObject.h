#pragma once
#include <iostream>
#include <string>

class HeapObject
{
public:	
	void show()
	{
		std::cout << "Heap Object name is:\t" << name << std::endl;
	}
	
	static HeapObject * produceObject(std::string name)
	{
		return new HeapObject(name);
	}
	

private:
	HeapObject() {}
	HeapObject(std::string n) : name(n) {}

	std::string name;
};