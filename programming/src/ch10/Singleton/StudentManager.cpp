#include "StudentManager.h"

//StudentManager * StudentManager::instance = 0;   //(1)ÀÁºº
StudentManager * StudentManager::instance = new StudentManager(); // (2) ¶öºº

void StudentManager::init()
{
	// instance = new StudentManager();			 //(1)ÀÁºº

	idName[10075] = "Tom";
	idName[10076] = "ÕÅÈı";
	idName[10085] = "ÖÜĞÇĞÇ";
	idName[10063] = "´óĞÛ";
	idName[10014] = "¿ÂÄÏ";
	idName[10057] = "¼Ó·Æ";
	idName[10097] = "°¢´ô";

	idScore[10075] = 100;
	idScore[10076] = 78;
	idScore[10085] = 93;
	idScore[10063] = 34;
	idScore[10014] = 82;
}

std::string StudentManager::findNameByID(int i)
{
	std::map<int, std::string>::const_iterator it = idName.find(i);
	if (it == idName.end())
		return "cannot find name";
	
	return it->second;
}

int StudentManager::findScoreByID(int i)
{
	std::map<int, int>::const_iterator it = idScore.find(i);
	if(it == idScore.end())
		return 0;

	return it->second;
}

void StudentManager::modifyScore(int i, int score)
{
	std::map<int, int>::iterator it = idScore.find(i);
	if (it == idScore.end())
		return;

	it->second = score;
}

void StudentManager::setScore(int i, int score)
{
	idScore[i] = score;
}
