#pragma once
#include <iostream>
#include <string>
#include "ColorSet.h"

class Weapon
{
public:
	virtual void attack() = 0;
	virtual std::string getName() = 0;
};

class Killer : public Weapon
{
public:
	Killer(std::string n) : name(n), weapon(NULL) {}

	std::string getName() { return name; }
	void equip(Weapon * e) 
	{
		weapon = e; 
		std::cout << name << "装备了 " << e->getName() << std::endl;;
	}

	void attack() 
	{ 
		std::cout << name << "\t";
		if (NULL == weapon)
		{
			std::cout<< "赤手空拳" << std::endl;
			return;
		}

		weapon->attack(); 
	}

private:
	std::string name;
	Weapon * weapon;
};

class Knife : public Weapon
{
	std::string getName() { return "菜刀"; }

	void attack()
	{
		std::cout << "动刀 ====/" << std::endl;
	}
};

class Gun : public Weapon
{
	std::string getName() { return "枪"; }

	void attack()
	{
		std::cout << "动枪 ----->" << std::endl;
	}
};

class Bomb : public Weapon
{
	std::string getName() { return "炸弹"; }
	void attack()
	{
		std::cout  << "咣！" << std::endl;
	}
};

class AtomBomb : public Weapon
{
	std::string getName() { return "原子弹"; }
	void attack()
	{
		std::cout << "ATOM ATTACKING !!!!!!" << std::endl;
	}
};