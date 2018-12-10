#pragma once
#pragma once
#include <iostream>
#include <string>

/*
	一个工厂方法模式的实现
	造车工厂
*/
class Vehicle
{
public:	virtual void run() = 0;
};

class Factory
{
public:virtual Vehicle * produce() = 0;
};

class Car : public Vehicle
{
	Car() {}
public:
	class CarFactory : public Factory
	{
	public:
		Vehicle * produce()
		{
			return new Car();
		}
	};

	void run()
	{
		std::cout << " Car start running! ------>" << std::endl;
	}
};

class Van : public Vehicle
{
	Van() {}
public:
	class VanFactory : public Factory
	{
	public:
		Vehicle * produce()
		{
			return new Van();
		}
	};
	void run()
	{
		std::cout << " Van start running! ------>" << std::endl;
	}
};

class Tank : public Vehicle
{
	Tank() {}
public:
	class TankFactory : public Factory
	{
	public:
		Vehicle * produce()
		{
			return new Tank();
		}
	};
	void run()
	{
		std::cout << " Tank start running! ------>" << std::endl;
	}
};
