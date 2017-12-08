#pragma once
#include <string>
#include <iostream>
#include "ColorSet.h"

class Soldier
{
public:
	Soldier(std::string n) : name(n) {}

	std::string getName() { return name; }

	void attack()
	{
		setWhite();
		std::cout << "Í½ÊÖÊ¿±ø" <<getName() << "\t" <<  "È­´ò½ÅÌß" << std::endl;
	}

private:
	std::string name;
};

class KnifeSoldier : public Soldier
{
public:
	KnifeSoldier(std::string n) : Soldier(n) {}

	void attack()
	{
		setRed();
		std::cout << "´øµ¶»¤ÎÀ" << getName() << "\t" << "¶¯µ¶ ====/" << std::endl;
	}
};

class GunSoldier : public Soldier
{
public:
	GunSoldier(std::string n) : Soldier(n) {}

	void attack()
	{
		setMagenta();
		std::cout << "Ç¹±ø" << getName() << "\t" << "¶¯Ç¹ ----->" << std::endl;
	}
};

class Sniper : public Soldier
{
public:
	Sniper(std::string n) : Soldier(n) {}

	void attack()
	{
		setGreen();
		std::cout << "¾Ñ»÷ÊÖ" << getName() << " ¾Ñ»÷ ===> " << std::endl;
	}
};