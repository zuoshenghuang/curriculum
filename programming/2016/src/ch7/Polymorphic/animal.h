#pragma once
#include <iostream>
#include <string>

class Animal
{
public:
	Animal(std::string n) : name(n) {}
	virtual void show() = 0;

private:
	std::string name;
};

class Bird : public Animal
{
public:
	Bird(std::string n) : Animal(n) {}
	virtual void show(){ std::cout << "bird" << std::endl;}
	virtual void canfly() { std::cout << "I can fly" << std::endl; }
	// void canfly() { std::cout << "I can fly" << std::endl; }
};

class Penguin : public Bird
{
public:
	Penguin(std::string n) : Bird(n) {}

	void show(){std::cout << "penguin" << std::endl;}

	virtual void canfly() { std::cout << "No, I cannot fly" << std::endl; }
};

class Parrot : public Bird
{
public:
	Parrot(std::string n) : Bird(n) {}

	void show(){std::cout << "parrot" << std::endl;}
};

class Dog : public Animal
{
public:
	Dog(std::string n) : Animal(n) {}
	void show() { std::cout << "dog" << std::endl; }
};