#pragma once
#include <iostream>
#include <string>

/*
	命令的receiver，执行者，程序员类
*/
class Programmer
{
public:
	void code()
	{
		std::cout << "start coding" << std::endl;
	}

	void install()
	{
		std::cout << "start installing" << std::endl;
	}

	void debug()
	{
		std::cout << "start debugging" << std::endl;
	}
};

/*
	命令接口类
*/
class Command
{
public:
	virtual void execute() = 0;
};

/*
	发号施令的 经理
*/
class Manager
{
public:
	void setCommand(Command *c) { command = c; }
	void act()
	{
		if (NULL == command)
		{
			std::cout << "no command" << std::endl;
			return;
		}
		command->execute();
	}
private:
	Command * command;
};

/*
	一个日常命令
*/
class RoutineCommand : public Command
{
public:
	RoutineCommand(Programmer * c) : coder(c) {}

	void execute()
	{
		coder->install();
		coder->code();
		coder->debug();
	}

private:
	Programmer * coder;
};

