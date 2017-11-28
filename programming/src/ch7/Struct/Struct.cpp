#include "List.h"
#include <string>

void test_int_list()
{
	MiniList<int> ilist;
	for (int i = 0; i < 10; i++)
		ilist.insert(i);

	ilist.show();
	std::cout << "==============================" << std::endl;
	ilist.remove(5);
	ilist.insert(100);
	ilist.show();
}

void test_string_list()
{
	MiniList<std::string> strlist;
	strlist.insert("zero");
	strlist.insert("one");
	strlist.insert("two");
	strlist.insert("three");
	strlist.insert("four");
	strlist.insert("five");
	strlist.insert("six");
	strlist.show();

	std::cout << "==============================" << std::endl;
	strlist.remove(4);
	strlist.remove(8);
	strlist.show();
}

int main()
{
	test_int_list();
//	test_string_list();

	system("pause");
    return 0;
}

