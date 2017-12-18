#include "Mediator.h"


void testMediator()
{
	Renter Tom;
	LandLord MrsLee;

	HouseMediator John;
	John.setLandLord(&MrsLee);
	John.setRenter(&Tom);

	Tom.setMediator(&John);
	MrsLee.setMediator(&John);

	Tom.sendMessage("I am a renter ,I want get a room, $100");
	MrsLee.sendMessage("OK, I'd like to rent my flat");

}
int main()
{
	testMediator();
	system("pause");
    return 0;
}

