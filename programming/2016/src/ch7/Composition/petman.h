#pragma once
#include <vector>
#include<string>
#include<iostream>

class PetMan
{
public:
	virtual void showMyPet() = 0;
};

class DogMan : public PetMan
{
public:
	virtual void showMyPet()
	{
		std::cout << "I have a dog" << std::endl;
	}
};

class CatMan : public PetMan
{
	virtual void showMyPet()
	{
		std::cout << "I have a cat" << std::endl;
	}
};

class DogCatMan : public PetMan
{
public:
	virtual void showMyPet()
	{
		std::cout << "I have a dog and a cat" << std::endl;
	}
};

class DogCatHippoMan : public PetMan
{
public:
	virtual void showMyPet()
	{
		std::cout << "I have a dog and a cat, and a hippo" << std::endl;
	}
};

class DogDuckHippo3CatsMan : public PetMan
{
public:
	virtual void showMyPet()
	{
		std::cout << "I have a dog and a cat, and a hippo, 3 cats and a duck" << std::endl;
	}
};