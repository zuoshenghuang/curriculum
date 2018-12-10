#pragma once

/*
	迭代器模式示例
*/

// 一个模板化的迭代器接口
template <class T>
class Iterator
{	
public:
	virtual T & next() = 0;
	virtual bool hasNext() = 0;
};

// 一个模板化的可以进行迭代访问的结构接口
template <class T>
class Iterable
{
public:
	virtual Iterator<T> * begin() = 0;
};

template <class T>
class ArrayIterator;

// 一个限定大小的动态数组：可迭代访问
template <class T>
class Array : public Iterable<T>
{
public:
	Array(int sz) : size(sz)
	{
		arr = new T[size];
	}
	~Array()
	{
		if (nullptr != arr)
		{
			delete [] arr;
			arr = nullptr;
		}
	}	

	T & get(int i)
	{
		return arr[i];

	}

	Iterator<T> * begin()
	{
		return new ArrayIterator<T>(*this);
	}

	int getSize()
	{
		return size;
	}

	T & operator [](int i)
	{
		return arr[i];
	}
private:
	T * arr;
	int size;
};

// 适用于Array的迭代器
template <class T>
class ArrayIterator : public Iterator<T>
{
public:
	ArrayIterator(Array<T> & a) : arr(a), pos(0) {}
	
	T & next()
	{
		return arr.get(pos ++);
	}
	bool hasNext()
	{
		return pos < arr.getSize();
	}

private:
	Array<T> & arr;
	int pos;
};