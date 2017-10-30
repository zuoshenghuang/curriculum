#include <iostream>
#include <string>

void test_string()
{
	std::string a = "my ";
	std::string b("chinese");
	std::string c = a + b + " name";	

	std::cout << c << std::endl;
	std::cout << "string c length is:\t" << c.length() << std::endl;
	std::cout << "string c size is:\t" << c.size() << std::endl;

	std::string me = "我";
	std::cout << me << std::endl;
	std::cout << me.size() << std::endl;
	std::cout << me.length() << std::endl;
	std::cout << "============================" << std::endl;

	const char * str = c.c_str();
	std::cout << "const char * str:\t" << str << std::endl;
	const char ch = c.at(3);
	std::cout << "c.at(3):\t" << ch <<std::endl;
}

void test_use()
{
	using namespace std;

	string str = "my chinese name";
	string sub = str.substr(4, 8); //(起始位置，移动多远)
	cout << "sub is:\t" << sub << endl;

	size_t pos = str.find(" ");
	std::cout << "find:\t" << pos << std::endl;
	pos = str.find_last_of(" ");
	std::cout << "find last:\t" << pos << std::endl;
}

/*
	一个综合的小应用，剃除字符串中指定的字符
	为什么要用引用？
*/
void trim(std::string & s, std::string sep)
{
	if (s.empty())
		return;

	size_t pos = s.find_first_of(sep);
	while (pos != std::string::npos)
	{
		s.erase(pos, sep.size());
		pos = s.find_first_of(sep);
	}
}

void test_trim()
{
	std::string str = "my chinese name is Huang xx";
	trim(str, " ");
	std::cout << str << std::endl;

	str = "Brazil,Russia,India,China,South Africa";
	trim(str, ",");
	std::cout << str << std::endl;

}

int main()
{
//	test_string();
//	test_use();
	test_trim();
	system("pause");
    return 0;
}

