#include<map>
#include<vector>
#include<string>
#include<iostream>
#include "Student.h"

using namespace std;
void test_map()
{
	map<int, string> id_name_map;
	pair<int, string> a(100924, "周星星");
	id_name_map.insert(a);
	id_name_map.insert(pair<int, string>(100376, "李明星"));
	id_name_map[100453] = "Andy";
	id_name_map[100453] = "Gump";

	map<int, string>::iterator it = id_name_map.begin();
	for (; it != id_name_map.end(); it++)
	{
		std::cout << it->first << "," << it->second << std::endl;
	}
}
typedef map<int, Student> ISMap;

vector<Student> a =
{ Student(10131, "Andy", 32, 1.75f),
Student(10042, "大军", 75, 1.68f),
Student(10243, "张三", 88, 1.73f),
Student(10002, "李四", 72, 1.78f),
Student(10231, "Candy", 15, 1.83f)
};

void test_order()
{

	ISMap scoreRankList;
	for (Student s : a)							// 一个新的标准
	{
		scoreRankList[s.getScore()] = s;
	}
	
	ISMap::iterator it = scoreRankList.begin();
	while (it != scoreRankList.end())
	{
		std::cout << it->first;
		it->second.show();

		it++;
	}
}

void test_find()
{
	ISMap idMap;
	for (Student s : a)
	{
		idMap[s.getID()] = s;
	}

	ISMap::iterator it = idMap.find(10002);
	if (it == idMap.end())
	{
		std::cout << "cannot find the key: " <<std::endl;
		return;
	}
	
	it->second.show();
}

void test_erase_by_find()
{
	ISMap idMap;
	for (Student s : a)
	{
		idMap[s.getID()] = s;
	}
	ISMap::iterator it = idMap.begin();
	for (; it != idMap.end(); it++)
		it->second.show();

	it = idMap.find(10131);
	if (it != idMap.end())
		idMap.erase(it);
	std::cout << "----------------------------------" << std::endl;
	for (it = idMap.begin(); it != idMap.end(); it++)
		it->second.show();
}


void test_erase_by_condition()
{
	ISMap idMap;
	for (Student s : a)
	{
		idMap[s.getID()] = s;
	}
	ISMap::iterator it = idMap.begin();
	for (; it != idMap.end(); it++)
		it->second.show();

	it = idMap.begin();
	while (it != idMap.end())
	{
		if (it->second.getScore() < 50)
			//it = idMap.erase(it);		
			//idMap.erase(it);
			idMap.erase(it++);   // 一种通用方式
		else
			it++;
	}

	std::cout << "----------------------------------" << std::endl;
	for (it = idMap.begin(); it != idMap.end(); it++)
		it->second.show();
}
int main()
{
	//test_map();
	//test_order();
	//test_erase_by_find();
	test_erase_by_condition();
	system("pause");
    return 0;
}

