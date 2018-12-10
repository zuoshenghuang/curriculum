#pragma once
#include <iostream>
#include <string>

class Animal
{
public:
	Animal(std::string n) : name(n) {}
	void show()
	{
		std::cout << "animal" << std::endl;
	}
private:
	std::string name;
};

class Bird : public Animal
{
public:
	Bird(std::string n) : Animal(n) {}
	void show()
	{
		std::cout << "bird" << std::endl;
	}
};

class Penguin : public Bird
{
public:
	Penguin(std::string n) : Bird(n) {}

	void show()
	{
		std::cout << "penguin" << std::endl;
	}
};

class Parrot : public Bird
{
public:
	Parrot(std::string n) : Bird(n) {}

	void show()
	{
		std::cout << "parrot" << std::endl;
	}
};

class Dog : public Animal
{
public:
	Dog(std::string n) : Animal(n) {}
};