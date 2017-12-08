#pragma once
#include <iostream>
#include <string>

class Movable
{
public:
	virtual void move() = 0;
};

class Driver : Movable
{
	Movable * movable;
public:
	Driver() : movable(NULL) {}

	void drive(Movable * m)
	{
		movable = m;
	}

	void move()
	{
		if (NULL == movable)
			std::cout << "通过脚移动" << std::endl;
		else
			movable->move();
	}
};

class Car : public Movable
{
	void move()
	{
		std::cout << "开车移动" << std::endl;
	}
};