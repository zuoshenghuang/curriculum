#pragma once
#include<iostream>
#include<cmath>

// 泛化
template <class T>
class Compare
{
public:
	bool equal(T& a,  T& b)
	{
		std::cout << "generic compare" << std::endl;
		return (a == b);
	}
};

// 特化为float
template <>
class Compare<float>
{
public:
	bool equal( float& a, float& b)
	{
		std::cout << "float compare" << std::endl;
		return (abs(a - b) < 10e-3);
	}
};

// 特化为double
template <>
class Compare<double>
{
public:
	bool equal(double& a, double& b)
	{
		std::cout << "doble compare"<< std::endl;
		return (abs(a - b) < 10e-6);
	}
};