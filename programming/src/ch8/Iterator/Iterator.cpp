#include <vector>
#include <iostream>

void test_iterator()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);

	for (std::vector<int>::iterator it = vec.begin();
		it != vec.end(); it++)
		std::cout << *it << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::vector<int>::iterator it = vec.begin();
	it++;
	it++;
	for (; it != vec.end(); it++)
		std::cout << *it << std::endl;
}

void test_erase()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);

	std::vector<int>::iterator it = vec.begin();
	it++;
	vec.erase(it);			// 这是干什么的？
	for (it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << std::endl;
	
}

int main()
{
//	test_iterator();
	test_erase();
	system("pause");
    return 0;
}

