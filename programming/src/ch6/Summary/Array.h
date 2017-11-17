#pragma once
#include "DoSth.h"
#include <algorithm>

#ifndef _SAFE_DEL_ARRAY
#define _SAFE_DEL_ARRAY(p) { if(p){delete[] (p);  (p)=NULL;} }
#endif

template <typename Type>
class Array
{
public:
	Array(int sz) : size(sz)
	{
		arr = new Type[size];
	}

	~Array()
	{
		_SAFE_DEL_ARRAY(arr);
	}

	Type & operator [] (int index)
	{
		return arr[index];
	}

	int getSize() { return size; }
	// 对 下标[begin, end]之间的元素进行操作包含end
	void foreveryone(int begin, int end, What2do<Type> & dosth)
	{
		int bound = std::min(end, size-1);
		if (begin > bound)
		{
			std::cerr << "the beginning index is out of bound!" << std::endl;
			return;
		}
		for (int i = begin; i <= bound; i++)
		{
			dosth(arr[i]);
		}
	}

private:
	Type * arr;
	int size;
};