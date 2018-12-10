#pragma once

class Movable
{
public:
	virtual void move() = 0;

	Movable & operator = (const Movable & o)
	{
		return *this;
	}
};

class Flyable
{
public:
	virtual void fly() = 0;
};

class Swimmable
{
public:
	virtual void swim() = 0;
};
