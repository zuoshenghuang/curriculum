#pragma once
#include <iostream>

/*
	模板形式的 for each
*/
template<typename T>
class What2do
{
public:
	virtual void operator()(T & ) = 0;
};

template<typename T>
class Show : public What2do<T>
{
public:
	void operator()(T & obj)
	{
		std::cout << obj <<std::endl;
	}
};


template<typename T>
class DoubleMe : public What2do<T>
{
public:
	void operator()(T & obj)
	{
		obj *= 2;
	}
};
template<typename T>
void for_everyone_t(T arr[], int size, What2do<T> & doSth)
{
	std::cout << __FUNCTION__ << std::endl;
	for (int i = 0; i < size; i++)
	{
		doSth(arr[i]);
	}
}