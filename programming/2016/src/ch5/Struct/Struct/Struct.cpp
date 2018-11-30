#include <iostream>

/*
	struct的地址和大小相关问题
*/
struct Empty{};

struct Pair
{
	int first; 
	int second;
};

struct Student
{
	int ID;
	char * name;
};

void test_size()
{
	std::cout << "sizeof(Empty):\t" << sizeof(Empty) <<std::endl;
	std::cout << "sizeof(Paire):\t" << sizeof(Pair) << std::endl;

	Student A, B;
	A.ID = 153001;
	A.name = "米琪";

	B = {14310, "Donald Trump"};

	std::cout << "size(A)\t" << sizeof(A) << std::endl;
	std::cout << "size(B)\t" << sizeof(B) << std::endl;
	
}

void test_addr()
{
	Pair p;
	p.first = 10095;
	p.second = 93;

	//  Debug和Release下是否相同
	std::cout << "addr first\t" << &p.first << std::endl;
	std::cout << "addr second\t" << &p.second << std::endl;

}

int main()
{
	test_size();
	test_addr();

	system("pause");
    return 0;
}

