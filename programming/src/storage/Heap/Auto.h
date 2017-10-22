#pragma once

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
		if (arr != nullptr)
		{
			delete[] arr;
			arr = nullptr;
			std::cout << __FUNCTION__ << "\tOK" << std::endl;
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

