#pragma once
#include <string>
#include <iostream>

class Potato
{
public:
	Potato(std::string n) : name(n), skin("SKIN") {}

	// 用于查明真相的拷贝构造函数
	Potato(const Potato & other)
	{
		name = other.name;
		skin = other.skin;
		std::cout << "ID(" << this << ")" << name << " <---copied from---" << "ID(" << &other << ")" << other.name << std::endl;

	}

	//Potato operator = (Potato & other)				// (1)
	//Potato & operator = (Potato & other)          // (2)		// 推荐方式
	const Potato & operator = (Potato & other)	// (3)		// 限定了不能使用 x = y = z;
	{
		name = other.name;
		skin = other.skin;
		std::cout << "ID(" << this << ")" << name << " <---assigned from---" << "ID(" << &other << ")" << other.name << std::endl;
		return *this;
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

	void changeName(std::string newName) const;

private:
	std::string name;
	std::string skin;
};
