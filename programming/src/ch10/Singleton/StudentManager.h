#pragma once
#include <iostream>
#include <string>
#include <map>

class StudentManager
{
	StudentManager() {}						// 私有化了
public:
	static StudentManager * getInstance()
	{
		return instance;
	}

	static void destroy()
	{
		if (instance != NULL)
		{
			delete instance;
			instance = NULL;
		}
	}

	void init();

	std::string findNameByID(int i);

	int findScoreByID(int i);

	// 请问， a 和 b 有什么区别？
	void modifyScore(int, int);			// a

	void setScore(int, int);			// b

private:
	static StudentManager * instance;

	std::map<int, std::string> idName;

	std::map<int, int>idScore;
};