#include <iostream>
#include <string>
#include <locale> 

/*
	unicode 宽字节字符的使用示例
*/
void test_wchar()
{
	std::wcout.imbue(std::locale("chs"));
	std::cout << "size of wchar_t: " << sizeof(wchar_t) << std::endl;

	wchar_t wo = L'我';
	std::wcout << "wo: " << wo << std::endl;
//	wchar_t * p = L"我的中国心";
	std::wstring str = L"我的中国心";
	std::wcout << str << std::endl;
}

int main()
{
	test_wchar();
	system("pause");
    return 0;
}

