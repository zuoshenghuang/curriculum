#pragma once
#include <iostream>

class Circle
{
public:
	Circle() { radius = 0; }
	Circle(int r) : radius(r) {}
	void show()
	{
		std::cout << "radius:\t" << radius << std::endl;
	}

	bool operator == (const Circle & other)	const // const 
	{
		return radius == other.radius;
	}
	
	bool operator < (const Circle & other)	const // const 
	{
		return radius < other.radius;
	}

	// ++ i
	Circle & operator ++()
	{
		radius++;
		return *this;
	}

	// i++
	Circle operator ++(int)
	{
		Circle anew = *this;
		radius++;
		return anew;
	}

	Circle operator + (const Circle & other)
	{
		Circle res;
		res.radius = this->radius + other.radius;

		return res;
	}

private:
	int radius;
};