#include "State.h"

void testState()
{
	H2O h(new Ice());
	h.heat();
	h.heat();
	h.heat();
	h.froze();
	h.froze();
	h.froze();

}

int main()
{
	testState();
	system("pause");
    return 0;
}

