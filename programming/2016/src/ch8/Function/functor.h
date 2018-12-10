#pragma once

class MoreThan
{
public:
	MoreThan(int v) : value(v) {}

	bool operator ()(int m)
	{
		return m > value;
	}
private:
	int value;
};