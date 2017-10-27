#include <iostream>

/*
	ASCII字符的示例
*/
void test_char()
{
	char a = 'a';
	char A = 'A';
	char two = '2';
	char seven = '7';
	char eleven = '11';  // dumb !
	char slash = '/';
	// char back_slash = '\'; // 这是什么？
	char back_slash = '\\';

	std::cout << "a:\t" << a << "=" << (int)a << "\tHEX:" << std::hex << (int)a << std::dec << std::endl;
	std::cout << "A:\t" << A << "=" << (int)A << "\tHEX:" << std::hex << (int)A << std::dec << std::endl;

	std::cout << "two:\t" << two << "=" << (int)two << "\tHEX:" << std::hex << (int)two << std::dec << std::endl;
	std::cout << "seven:\t" << seven << "=" << (int)seven << "\tHEX:" << std::hex << (int)seven << std::dec << std::endl;
	std::cout << "eleven:\t" << eleven << "=" << (int)eleven << "\tHEX:" << std::hex << (int)eleven << std::dec << std::endl;

	std::cout << "slash:\t" << slash << std::endl;
	std::cout << "back slash:\t" << back_slash << std::endl;
}

void test_7()
{
	char di = '\7';
	std::cout << "di:\t" << di << std::endl;
}

void test_chinese()
{
	char c = '中';
	std::cout << "c:\t" << c << "=" << (int)c << "\tHEX:" << std::hex << (short)c << std::dec << std::endl;

	char p[] = "我的中国心";
	std::cout << p << std::endl;

	char me[5];
	me[4] = 0;
	me[0] = 0xce; me[1] = 0xd2;
	me[2] = 0xd0; me[3] = 0xc4;

	std::cout << me << std::endl;
}
int main()
{
//	test_7();
//	test_char();
	test_chinese();
	system("pause");
    return 0;
}

