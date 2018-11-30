#pragma once
#include <iostream>

// 抽象基类“做点什么”
class DoSth
{
public:
	virtual void operator()(int &) = 0;
};

// 做“显示”
class ShowMe : public DoSth
{
public:
	void operator()(int & obj)
	{
		std::cout << obj << std::endl;
	}
};

// 做 “清值”
class Clear : public DoSth
{
public:
	void operator()(int & obj)		// 为什么要用& ?
	{
		obj = 0;
	}
};

/*
	对每个元素，做XX操作
	XX 操作 是 DoSth 的子类
*/
void for_everyone(int arr[], int size, DoSth & op)
{
	for (int i = 0; i < size; i++)
	{
		op(arr[i]);
	}
}
