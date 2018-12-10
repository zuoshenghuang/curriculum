#pragma once
#include <iostream>
#include <string>

class PassExamStrategy
{
public:
	virtual void takeExam() = 0;
};

class Student
{
	PassExamStrategy * how2do;

public:
	void useStrategy(PassExamStrategy * strategy)
	{
		how2do = strategy;
	}

	void pass()
	{
		std::cout << "尝试使用";
		how2do->takeExam();
		std::cout << "通过考试" << std::endl;
	}
};

class ReviewHardly : public PassExamStrategy
{
public:
	void takeExam()
	{
		std::cout << "努力加以复习的策略";
	}
};

class Cheat : public PassExamStrategy
{
public:
	void takeExam()
	{
		std::cout << "作弊的策略";
	}
};

class FakeExam : public PassExamStrategy
{
public:
	void takeExam()
	{
		std::cout << "替考的策略" ;
	}
};

