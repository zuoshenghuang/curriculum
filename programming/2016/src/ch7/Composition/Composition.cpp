#include <iostream>
#include "owner.h"
#include "petman.h"

void test_owner()
{
	Owner Charlie;
	
	Cat Tom;
	Dog Snoopy;
	Hippo Heoleo;

//	Charlie.addPet(&Tom);
	Charlie.addPet(&Snoopy);
	Charlie.addPet(&Heoleo);

	Charlie.showMyPets();
}

void test_petman()
{
	DogMan dm;
	dm.showMyPet();
	DogDuckHippo3CatsMan ddh3c;
	ddh3c.showMyPet();
}

int main()
{
	//test_petman();
	test_owner();

	system("pause");
    return 0;
}

