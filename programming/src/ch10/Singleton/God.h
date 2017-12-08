#pragma once

#include <iostream>
#include <string>

class God
{
	enum {Monday=1,Tuesday, Wednesday,	Thursday,Friday,Saturday, Sunday,daysNum=7};
	
	God() // к╫сп╩╞ак
	{
		week[Sunday] = "bless & rest";
		week[Monday] = "light";
		week[Tuesday] = "firmament,land";
		week[Wednesday] = "plants";
		week[Thursday]	= "stars, seasons,days,years";
		week[Friday] = "whales,fowls";
		week[Saturday] = "more animals, Adam";
	}			 
public:
	static God & getInstance()	{return instance;}

	void show()
	{
		std::cout << "I am the only god of the world" << std::endl;
	}

	std::string what2do(int d)
	{
		return week[d];
	}
	
private:
	static God instance;

	std::string week[daysNum];
};