#pragma once
#include <string>
#include <iostream>

class Potato
{
public:
	Potato(std::string n) : name(n), skin("SKIN") {}

	// 用于查明真相的拷贝构造函数
	Potato(Potato & other)
	{
		name = other.name;
		skin = other.skin;
		std::cout << "ID(" << this << ") <---copied from---" << "ID(" << &other << ")" <<std::endl;
	}

	void show()
	{
		std::cout << "ID(" << this << "):\t"  << skin <<" "<< name << " potato " <<std::endl;
	}

	void peel()
	{
		skin = "PEELED";
		std::cout << "ID(" << this << "):\t" << name << " potato is peeled" << std::endl;
	}

private:
	std::string name;
	std::string skin;
};
