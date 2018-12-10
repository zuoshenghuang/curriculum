#pragma once

#include <string>
#include <iostream>
#include <Windows.h>

class Student
{
public:
	Student(unsigned int i, std::string n, unsigned s, float h) : id(i),
		name(n), score(s), hight(h) {}
	Student(const Student & other)
	{
		this->id = other.id;
		this->name = other.name;
		this->score = other.score;
		this->hight = other.hight;
		std::cout << "copy+++++++" << std::endl;
		Sleep(5000);
		
	}
	void show()
	{
		std::cout << id << "(" << name << "," << score << "," << hight << ")" <<std::endl;
	}
private:
	unsigned int id;
	std::string name;
	unsigned int score;
	float hight;
};