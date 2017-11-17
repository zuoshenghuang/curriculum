#pragma once
#include<string>
#include<fstream>
#include<iostream>
#include "Array.h"
#include "Student.h"

class DataFile
{
public:
	DataFile(std::string fn) : fileName(fn) {}
	void load(Array<Student> & outArray);

private:
	std::string fileName;
};