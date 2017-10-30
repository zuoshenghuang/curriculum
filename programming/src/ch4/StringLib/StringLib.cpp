#include <iostream>
/*
	字符串相关的库函数使用示例
*/
void test_string_len()
{
	const char * str = "my chinese name";
	int len = strlen(str);

	std::cout << "length of str: " << len << std::endl;

	std::cout << &(str[len - 8]) << std::endl;

	std::cout << str + len - 6 << std::endl;

	std::cout << ++str<< std::endl;
}

void test_str_link()
{
	const char * str = "my chinese name";
	char name[150];
	strncpy_s(name, str, strlen(str));
	strncat_s(name, str, strlen(str));
	std::cout << name << std::endl;
}

void test_str_ok()
{
	char string[] = "Brazil,Russia	India,China\nSouth Africa";
	std::cout << "string is:\t" << string << std::endl;
	std::cout << "----------------------" << std::endl;


	char *seps = ",\t\n";
	char *next_token = NULL;
	char * sub = strtok_s(string, seps, &next_token);
	

	while (sub != NULL)
	{
		std::cout << sub << std::endl;
		sub = strtok_s(NULL, seps, &next_token);
	}
}

int main()
{
//	test_string_len();
//	test_str_link();
	test_str_ok();
	system("pause");
    return 0;
}

