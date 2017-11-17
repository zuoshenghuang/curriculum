#pragma once
#include <string>
#include <iostream>

/*
	一个描述“学生”的类
	学生包括 3 个 属性
	ID : 学号
	name : 名字
	score : 学分
*/
class Student
{
	typedef unsigned int uint;
	typedef unsigned short ushort;

public:
	Student() : id(0), name(""), score(0) {}
	Student(uint i, std::string n) : id(i), name(n), score(0) {}
	Student(uint i, std::string n, ushort s) : id(i), name(n),score(s) {}

	void setScore(int s) { score = s; }

	inline void operator *= (int i){score *= i;}

	Student & operator = (const Student & other)
	{
		id = other.id; name = other.name; score = other.score;
		return *this;
	}

	Student (const Student & other)
	{
		id = other.id; name = other.name; score = other.score;
		std::cout << "construct :" <<(*this)<<"\at"<<std::endl;
	}

	void loadFromString(std::string);

	friend std::ostream & operator << (std::ostream & output, const Student & s);
private:
	uint id;			// 学号
	std::string name;	// 姓名
	ushort score;		// 分数
};

