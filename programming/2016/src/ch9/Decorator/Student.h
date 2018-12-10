#pragma once
#include <iostream>
#include <string>

/*
	接口类：学生
*/
class Student
{
public:
	virtual std::string getTitle() = 0;
	virtual int getStudyTime() = 0;
};

class Freshman : public Student
{
public:
	std::string getTitle()
	{
		return "大一学生";
	}
	int getStudyTime()
	{
		return 100;
	}
};

/*
	装饰类：学生干部
*/
class StudentLeader : public Student
{
	Student & student;
public:
	Student & getStudent() { return student; }
	StudentLeader(Student & s) : student(s) {}
	std::string getTitle()
	{
		return student.getTitle();
	}
	int getStudyTime()
	{
		return student.getStudyTime();
	}
};


/*
	班长
*/
class Monitor : public StudentLeader
{
public:
	Monitor(Student & s) : StudentLeader(s) {}

	std::string getTitle()
	{
		return "班长 " + getStudent().getTitle();
	}
	int getStudyTime()
	{
		return getStudent().getStudyTime() - 5;
	}
};

/*
	团支书
*/
class LeagueSecretary : public StudentLeader
{
public:
	LeagueSecretary(Student & s) : StudentLeader(s) {}

	std::string getTitle()
	{
		return "团支书 " + getStudent().getTitle();;
	}
	int getStudyTime()
	{
		return getStudent().getStudyTime() - 2;
	}
};

class Commissary : public StudentLeader
{
public:
	Commissary(Student & s) : StudentLeader(s) {}

	std::string getTitle()
	{
		return "班级委员 " + getStudent().getTitle();;
	}
	int getStudyTime()
	{
		return getStudent().getStudyTime() - 1;
	}
};
