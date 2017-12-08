#pragma once

#include <iostream>
#include <string>

/*
	供电厂给出的“交流电”
	各国的电压不同，但不会变化
*/
class ACPowerSupplyer
{
public:
	ACPowerSupplyer(int v) : volt(v) {}

	int acoutput()	{return volt;}

private:
	int volt;
};
