#pragma once

#include "Power.h"

/*
	供“直流电”的设备
*/
class DCPowerSupplyer
{
public:
	virtual int dcoutput() = 0;
};

/*
	一个具体的直流电的“适配器”
*/
class Adapter : public DCPowerSupplyer
{
public:
	Adapter(const ACPowerSupplyer & as) : input(as){}

	int dcoutput()
	{
		if (input.acoutput() > 240 || input.acoutput() < 100)
			return input.acoutput() / 20;

		return 12;
	}

private:
	ACPowerSupplyer input;
};