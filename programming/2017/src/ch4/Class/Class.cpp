#include <iostream>

class A
{
	void show()
	{
		std::cout << __FUNCTION__ << std::endl;
	}
};
class B
{
	virtual void show()
	{
		std::cout << __FUNCTION__ << std::endl;
	}
	
};

class C : public B
{

};
class D : public B
{
	//char name[10];
	int id;
};

void test_class_fun()
{
	std::cout << "sizeof(A)\t" << sizeof(A) << std::endl;
	std::cout << "sizeof(B)\t" << sizeof(B) << std::endl;
	std::cout << "sizeof(C)\t" << sizeof(C) << std::endl;
	std::cout << "sizeof(D)\t" << sizeof(D) << std::endl;
}

int main()
{
	test_class_fun();

	system("pause");
    return 0;
}

