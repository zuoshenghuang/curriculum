#include "Power.h"
#include "Adapter.h"
#include "Cellphone.h"

void testAdapter()
{
	ACPowerSupplyer china_e(220);
	ACPowerSupplyer japan_e(110);
	ACPowerSupplyer industry_e(1000);
	ACPowerSupplyer toy_e(50);


	Adapter a(china_e);
	Adapter b(industry_e);
	Adapter t(toy_e);
	
	Cellphone c;
	c.charge(a);
	c.charge(b);
	c.charge(t);
}

int main()
{
	testAdapter();
	system("pause");
    return 0;
}

