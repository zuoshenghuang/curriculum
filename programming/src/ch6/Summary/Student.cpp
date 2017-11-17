#include "Student.h"

std::ostream & operator << (std::ostream & output, const Student &s)
{
	output << s.id << "(" << s.name << "," << s.score << ")";
	return output;
}

void Student::loadFromString(std::string str)
{
	std::string::size_type p1, p2;
	p1 = str.find_first_of(',');
	p2 = str.find_last_of(',');

	std::string str_1 = str.substr(0, p1);
	std::string str_2 = str.substr(p1+1, p2-p1-1);
	std::string str_3 = str.substr(p2+1);

	this->id = atoi(str_1.c_str());
	this->name = str_2;
	this->score = atoi(str_3.c_str());
}