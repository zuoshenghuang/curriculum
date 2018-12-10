#pragma once
#include <iostream>
#include <string>
#include <vector>

class Observer
{
public:
	virtual void onGetMsg(int msg) = 0;
	Observer(std::string n) : name(n) {}

	std::string getName() { return name; }
private:
	std::string name;
};

class MsgCenter
{
	std::vector<Observer*> all;

public:
	void addObserver(Observer & a)
	{
		all.push_back(&a);
	}

	void notify(int msg)
	{
		for (Observer * o : all)
			o->onGetMsg(msg);
	}
};

class Teacher : public Observer
{
public:
	Teacher(std::string n) : Observer(n) {}

	void onGetMsg(int msg)
	{
		if (msg == 0)
		{
			std::cout << getName() << ":上班" << std::endl;
			return;
		}

		if (msg == 1)
		{
			std::cout << getName() << ":大雪，不用上班了" << std::endl;
			return;
		}
	}
};

class Student : public Observer
{
public:
	Student(std::string n) : Observer(n) {}
	void onGetMsg(int msg)
	{
		if (msg == 0)
		{
			std::cout << getName() << ":上课" << std::endl;
			return;
		}

		if (msg == 1)
		{
			std::cout << getName() << ":大雪，老师不来上课了，今天自习" << std::endl;
			return;
		}
	}
};

class Staff : public Observer
{
public:
	Staff(std::string n) : Observer(n) {}

	void onGetMsg(int msg)
	{
		if (msg == 0)
		{
			std::cout << getName() << ":上班" << std::endl;
			return;
		}

		if (msg == 1)
		{
			std::cout << getName() << ":大雪，要进行打扫" << std::endl;
			return;
		}
	}
};