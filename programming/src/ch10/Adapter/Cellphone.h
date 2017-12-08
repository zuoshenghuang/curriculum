#pragma once
#include"Adapter.h"

/*
	用于测试的“手机类”
	只能用 5V 的“直流电”进行充电
*/
class Cellphone
{
public:
	void charge(DCPowerSupplyer & ds)
	{
		if (ds.dcoutput() > 5)
		{
			std::cout << "boom" << std::endl;
			return;
		}
		if (ds.dcoutput() < 5)
		{
			std::cout << "电压太低，只有" << ds.dcoutput() << "伏" << std::endl;
			return;
		}
		std::cout << "充电中======================" << std::endl;
	}
};