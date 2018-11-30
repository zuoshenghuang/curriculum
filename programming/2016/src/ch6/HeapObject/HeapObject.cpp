#include "Stay.h"

void test_stack()
{
	//Stay homeStay = Stay();
	//homeStay.show();
}

void test_heap()
{
	Stay * pHotel = NULL;
	// pHotel = new Stay("Shangrila");
	pHotel = Stay::provideMe("7 Days");
	pHotel->show();
	delete pHotel;
}

int main()
{
	test_stack();
	test_heap();

	system("pause");
    return 0;
}

