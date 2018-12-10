#pragma once
#include "useful.h"
#include <iostream>

class Car : public Movable
{
public:
	virtual void move()
	{
		std::cout << "A car is going!" << std::endl;
	}
};
