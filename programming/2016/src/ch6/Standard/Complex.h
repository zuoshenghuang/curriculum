#pragma once
#include <iostream>

class Complex
{
public:
	Complex() { r = 0, i = 0; }	
	Complex(int a, int b) : r(a), i(b) {}	// 初始化列表
	Complex(int a) : r(a), i(0) {}
	void show()	
	{
		std::cout << r << '+' << i << 'i' << std::endl;
	}

	bool operator == (const Complex & other)	const // const 
	{
		if (r != other.r)
			return false;

		if (i != other.i)
			return false;

		return true;
	}

	Complex operator + (const Complex & other)
	{
		Complex res;
		res.r = this->r + other.r;
		res.i = this->i + other.i;

		return res;
	}

	float real() const{ return r; }
	float imag() const { return i; }

private:
	float r;
	float i;
};

std::ostream & operator<<(std::ostream &output, const Complex &c)
{
	float i = c.imag();
	if (i == 0)
		return output << c.real();
	else
		return output << c.real() << "+" << c.imag() << "i";
}

