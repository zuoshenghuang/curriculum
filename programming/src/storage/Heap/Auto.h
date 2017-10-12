#pragma once

template <typename Type>
class Array
{
public:
	Array(int sz) : size(sz) 
	{
		arr = new Type[size];
	//	memset(arr, 0, size * sizeof(Type));
	}

	~Array()
	{
		if (arr != nullptr)
		{
			delete[] arr;
			arr = nullptr;
		}		
	}

	Type & operator [] (int index)
	{
		return arr[index];
	}

private:
	Type * arr;
	int size;
};

