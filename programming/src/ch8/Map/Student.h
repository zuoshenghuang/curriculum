#pragma once

#include <string>
#include <iostream>

class Student
{
public:
	
	Student() : id(0),name(""), score(0), hight(0) {}

	Student(int i, std::string n, int s, float h) : id(i),
		name(n), score(s), hight(h) {}

	void show()
	{
		std::cout << id << "(" << name << "," << score << "," << hight << ")" <<std::endl;
	}

	bool operator < (const Student & other) const
	{
		return this->hight < other.hight;
		//return this->score < other.score;		
	}
	int getID() { return id; }
	int getScore() { return score; }
	float getHight() { return hight; }

private:
	int id;
	std::string name;
	int score;
	float hight;
};