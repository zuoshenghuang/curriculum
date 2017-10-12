#include <iostream>

class Hollow {};

class HaveFunc
{
	void func() {};
};

class HaveVFunc
{
	virtual void func() {};
};

class One
{
private:
	int var;
public:
	One(int v) { var = v; }

	void show()
	{
		std::cout << this << std::endl;
		std::cout << this->var << std::endl;
	};
};

class ConstOne
{
private:
	const int MAX = 999;

public:
	ConstOne() {};
	//	ConstOne(int m) { MAX = m; }
	//	void setMax(int m) { MAX = m; }
	ConstOne(int m) : MAX(m) { }
	int getMax() { return MAX; }
};

int main()
{
	std::cout << sizeof(Hollow) << std::endl;
	std::cout << sizeof(HaveFunc) << std::endl;
	std::cout << sizeof(HaveVFunc) << std::endl;

	One one(17);
	std::cout << "size of class One is:" << sizeof(one) << std::endl;
	std::cout << "size of int is:" << sizeof(int) << std::endl;
	one.show();


	ConstOne A;
	std::cout << "A MAX is:" << A.getMax() << std::endl;
	ConstOne B(65535);
	std::cout << "B MAX is:" << B.getMax() << std::endl;

	system("pause");
	return 0;
}

