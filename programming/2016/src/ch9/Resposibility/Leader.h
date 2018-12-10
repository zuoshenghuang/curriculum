#pragma once

#include <iostream>
#include <string>

class Task
{
public:
	Task(int i, int im, std::string info) : id(i), importance(im), taskInfo(info){}

	std::string getTaskInfo() { return taskInfo; }
	int getImportance(){ return importance; }
	enum Level{LEVEL_LOW, LEVEL_COMMON, LEVEL_IMPORTANT, LEVEL_HIGH, LEVEL_FATAL};
private:
	int id;
	int importance;
	std::string taskInfo;
};

class Administrative
{
public:
	void setMyLeader(Administrative * a) { myLeader = a; }

	Administrative(std::string n) : name(n) {}

	virtual bool isMyDuty(Task &) = 0;

	virtual std::string getMyInfo() = 0;

	std::string getName() { return name; }

	void handle(Task & t)
	{
		if (isMyDuty(t))
		{
			std::cout << getMyInfo() << " handle " << t.getTaskInfo() << std::endl;
			return;
		}
		
		if (NULL == myLeader)
		{
			std::cout << getMyInfo() << " cannot handle " << t.getTaskInfo() << " and nobody can handle" <<std::endl;
			return;
		}

		std::cout << getMyInfo() << " cannot handle " << t.getTaskInfo() << " turn to " << myLeader->getMyInfo() << std::endl;
		myLeader->handle(t);
	}

private:
	Administrative * myLeader;
	std::string name;
};

class Manager : public Administrative
{
public:
	Manager(std::string n) : Administrative(n) {}

	bool isMyDuty(Task & t)
	{
		return t.getImportance() < Task::Level::LEVEL_IMPORTANT;
	}

	std::string getMyInfo()
	{
		return "Manager:" + getName();
	}
};

class Director : public Administrative
{
public:
	Director(std::string n) : Administrative(n) {}

	bool isMyDuty(Task & t)
	{
		return t.getImportance() < Task::Level::LEVEL_HIGH;
	}
	std::string getMyInfo()
	{
		return "Director:" + getName();
	}
};

class VP : public Administrative
{
public:
	VP(std::string n) : Administrative(n) {}

	bool isMyDuty(Task & t)
	{
		return t.getImportance() < Task::Level::LEVEL_IMPORTANT;
	}

	std::string getMyInfo()
	{
		return "VP:" + getName();
	}
};

class Boss : public Administrative
{
public:
	Boss(std::string n) : Administrative(n) {}

	bool isMyDuty(Task & t)
	{
		return t.getImportance() < Task::Level::LEVEL_FATAL;
	}

	std::string getMyInfo()
	{
		return "Boss:" + getName();
	}
};

