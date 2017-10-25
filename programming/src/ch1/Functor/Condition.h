#pragma once

class Condition
{
public:
	virtual bool operator()(int value) = 0;
};

class LT10 : public Condition
{
public:
	bool operator()(int value)
	{
		return value < 10;
	}
};

class Even : public Condition
{
public:
	bool operator()(int value)
	{
		return (value % 2) == 0;
	}
};

class MT21 : public Condition
{
public:
	bool operator()(int value)
	{
		return value > 21;
	}
};

void show_by_condition(int list[], int size, Condition & c)
{
	for (int i = 0; i < size; i++)
	{
		if (c(list[i]))
			std::cout << list[i] << std::endl;
	}
}