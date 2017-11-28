#pragma once
#include <iostream>
#include <string>

class Student
{
public:
	Student(int i, std::string n) : id(i), name(n) {}

	void show() const;

	void changeName(const std::string & n)const;

	void changeID(int i)const;

private:
	int id;
	mutable std::string name;		// 可以改名
};