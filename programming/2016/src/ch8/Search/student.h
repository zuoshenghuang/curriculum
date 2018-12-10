#pragma once
#include <iostream>
#include <string>

class Student
{
public:
	Student() {}
	Student(int i, std::string n) : id(i), name(n)	{}
	Student(int i, std::string n, int s) : id(i), name(n), score(s) {}
	int getScore() { return score; }
	void setScore(int s) { score = s; }

	bool operator == (const Student & other)
	{
		return id == other.id;
	}

	bool operator == (int fid)
	{
		return id == fid;
	}

	bool operator < (const Student & other)
	{
		return score < other.score;
	}
	
	std::string getName() { return name; }
	
private:
	int id;
	std::string name;

	int score;
};

const int max_stu_num = 10;
Student students[max_stu_num];