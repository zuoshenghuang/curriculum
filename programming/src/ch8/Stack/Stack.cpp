#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
std::vector<std::string> a = { "one", "two", "three", "four", "five" };

void test_stack()
{
	std::stack<std::string> strstack;
	for (int i = 0; i < a.size(); i++)
		strstack.push(a[i]);

	while (! strstack.empty())
	{
//		std::string top = strstack.top();
		std::cout << strstack.top() << std::endl;

		strstack.pop();
	}
	

}

int main()
{
	test_stack();
	system("pause");
    return 0;
}

