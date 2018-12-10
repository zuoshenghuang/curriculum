#pragma once
#include <iostream>
#include <string>

/*
	简单工厂 模式的示例
	造物之主
*/
class Object
{
public:
	virtual void show() = 0;
};

class Movable
{
public:
	virtual void move() = 0;
};

class Animal : public Object, public Movable
{
	
};

/*
	神说要有光，于是就有了光
*/
class Light :public Object
{
	friend class God;
	Light() {}
public:
	void show()
	{
		std::cout << "So there is light" << std::endl;
	}
};

/*
	一种动物
*/
class Human : public Animal
{
	friend class God;
	Human(){}
public:
	void show() 
	{
		std::cout << "I am a man!" << std::endl;
	}
	void move()
	{
		std::cout << "Human moving" << std::endl;
	}
};

/*
	另一种动物
*/
class Baboon : public Animal
{
	friend class God;
	Baboon() {}
public:
	void show()
	{
		std::cout << "Baboon!" << std::endl;
	}
	void move()
	{
		std::cout << "Baboon moving" << std::endl;
	}
};


/*
	万能的上帝，什么都可以造
	一视同仁，一切皆为 “物”
*/
class God
{
public:
	static Object * produce(std::string what)
	{
		if (what == "human")
			return new Human();
		else if (what == "light")
			return new Light();
		else if (what == "baboon")
			return new Baboon();
	
		return NULL;
	}
};