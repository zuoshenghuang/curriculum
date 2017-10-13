#pragma once

int add_5(int i)
{
	std::cout << __FUNCTION__ << std::endl;
	return i + 5;
}

int power_3(int i)
{
	std::cout << __FUNCTION__ << std::endl;
	return i * i * i;
}