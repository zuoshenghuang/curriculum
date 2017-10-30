#pragma once
#include <iostream>

/*
	二维平面上“点”的定义类
*/
class Point
{
public:	

	Point(int x0, int y0) : x(x0), y(y0) {}		// (1)

	Point() { x = 0, y = 0; }					// (2)
//	Point() { Point(0, 0);						// 调用(1),实现(2)

	// 拷贝构造函数
	Point(const Point & other)  //const
	{
		x = other.x;
		y = other.y;

		std::cout<< *this <<" copy from "<<other<<std::endl;
	}

	// 重载 <<，使cout支持 Point类对象的输出
	friend std::ostream & operator<<(std::ostream &output, const Point &p);

	// 赋值，重载=
	Point operator = (const Point & other)
	{
		std::cout << *this << " <-- " << other << std::endl;
		x = other.x;
		this->y = other.y;							// this

		return *this;
	}

	// 判断两个点是否相等（相同？相等？）
	bool operator == (const Point & other)	const // const 
	{
		if (x != other.x)
			return false;

		if (y != other.y)
			return false;
	
		return true;
	}

private:
	int x, y;
};

std::ostream & operator<<(std::ostream &output, const Point &p) 
{
	return output << "("<<p.x << "," << p.y << ") at " << &p;
}

void test_point()
{
	Point a;
	Point b(0, 1);
	Point c(b);
	Point d = b;			// d 刚刚产生，要构造
	a = d;					// a 已经诞生，直接调用 =

	std::cout <<" ====================== "<< std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
}