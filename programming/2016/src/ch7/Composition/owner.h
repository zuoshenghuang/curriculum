#pragma once
#include <iostream>
#include <vector>
class Pet
{
public:
	virtual void showme() = 0;
};

class Dog :public Pet
{
	virtual void showme()
	{
		std::cout << "Dog" << std::endl;
	}
};

class Cat :public Pet
{
	virtual void showme()
	{
		std::cout << "Cat" << std::endl;
	}
};

class Hippo :public Pet
{
	virtual void showme()
	{
		std::cout << "Hippo" << std::endl;
	}
};
class Owner
{
public:
	void showMyPets()
	{
		std::cout << "I am a pet owner, and I have :" << std::endl;
		for (Pet *p : mypets)
			p->showme();
	}
	void addPet(Pet * p)
	{
		mypets.push_back(p);
	}

private:
	std::vector<Pet*> mypets;
};

