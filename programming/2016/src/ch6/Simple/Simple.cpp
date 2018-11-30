#include <iostream>
class Dog
{
private:
	Dog()
	{
		std::cout << "a new dog" << std::endl;
	}
public:
	~Dog()
	{
		std::cout << "dog disappear" << std::endl;
	}

	void bark()
	{
		std::cout << "wang!" << std::endl;
	}

	static Dog * getNewDog()
	{
		return new Dog();
	}
};

void test_dog()
{
//	Dog tom;
//	tom.bark();
}

Dog* new_dog()
{
	//return new Dog();
	return Dog::getNewDog();
}

int main()
{
//	Dog tom;
//	tom.bark();

	
	Dog * haqi = new_dog();
	haqi->bark();
	delete haqi;	
	//test_dog();

	system("pause");
    return 0;
}

