#pragma once
#include <iostream>
#include "useful.h"

class Animal : public Movable
{
public:
	virtual void move() 
	{
		std::cout << "move, move,move" << std::endl;
	};
};

class Frog : public Animal
{
public:
	virtual void move()
	{
		std::cout << "Frog jump go!" << std::endl;
	}
};

class Bird : public Animal, Flyable
{
public:
	virtual void fly()
	{
		std::cout << "Fly, fly" << std::endl;
	}
};

class WildGoose : public Bird, Swimmable
{
public:
	void swim()
	{
		std::cout << "Wild Goose swim" << std::endl;
	}
};

class Penguin : public Bird, Swimmable
{
public:
	void swim()
	{
		std::cout << "Penguin swim" << std::endl;
	}

	virtual void fly()
	{
		std::cout << "Sorry, I am a Penguin,I cannot fly, :-(" << std::endl;
	}
};