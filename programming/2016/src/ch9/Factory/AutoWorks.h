#pragma once
#include <iostream>


class AutoMobile
{
public:
	virtual void run() = 0;
};

// 巴士
class Bus : public AutoMobile {};

// 轿车
class MotorCar : public AutoMobile{};

// Benz 轿车
class BenzCar : public MotorCar
{
	BenzCar() {}

public :
		friend class BenzWorks;
	void run()
	{
		std::cout <<"Benz Car start ------>"<< std::endl;
	}
};

// 奔驰大巴
class BenzBus : public Bus
{
	BenzBus() {}
	friend class BenzWorks;
public:
	void run()
	{
		std::cout << "Benz Bus start ------>" << std::endl;
	}
};

// 丰田轿车
class ToyotaCar : public MotorCar
{
	ToyotaCar() {}
	friend class ToyotaWorks;
public:
	void run()
	{
		std::cout << "Toyota Car start ------>" << std::endl;
	}
};

// 丰田大巴
class ToyotaBus : public Bus
{
	ToyotaBus() {}
	friend class ToyotaWorks;
public:
	void run()
	{
		std::cout << "Toyota Bus start ------>" << std::endl;
	}
};

/*
	抽象工厂
	汽车生产厂家
*/
class AutoWorks
{
public:
	virtual Bus * produceBus() = 0;
	virtual MotorCar * produceCar() = 0;
};

// 奔驰汽车厂
class BenzWorks : public AutoWorks
{
public:
	Bus * produceBus()
	{
		return new BenzBus();
	}
	MotorCar * produceCar()
	{
		return new BenzCar();
	}
};

// 丰田汽车厂
class ToyotaWorks : public AutoWorks
{
public:
	Bus * produceBus()
	{
		return new ToyotaBus();
	}
	MotorCar * produceCar()
	{
		return new ToyotaCar();
	}
};