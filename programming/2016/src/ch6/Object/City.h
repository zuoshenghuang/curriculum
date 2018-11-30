#pragma once
#include <iostream>
#include <string>

class City
{
public:
	City(std::string n) : name(n) {}
	City(const City & o)
	{
		std::cout << "copy by "<<o.zone<< std::endl;
		name = o.name;
	}

	/*
		´Ë´¦ÓÐ¿Ó :)
	*/
	City operator = (const City & o)
	{
		std::cout << "<---- " << o.zone << std::endl;
		name = o.name;
		zone = o.zone;
		return *this;
	}

	std::string desc() 
	{
		std::string loc = zone.empty() ? "UNKNOWN" : zone;
		
		return name + " :@ " + loc;
	}
	void setZone(std::string z){zone = z;}
	std::string getName() { return name; }
	void show()
	{
		std::cout << desc() << std::endl;
	}
private:
	std::string name;
	std::string zone;
};