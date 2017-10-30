#include<iostream>

// argc 参数个数，就是argv中包含的字符串的数目
// argv 是一个字符串数组
// argv[0],就是程序本身的文件名
int main(int argc, char * argv[])
{
	printf("Hello world\n");

	std::cout << "OK, C ++ " << std::endl;
	using namespace std;
	cout << "OK, using namespace" << endl;

	cout << argc << endl;

	for (int i = 0; i < argc; i++)
		cout << argv[i] << endl;

	system("pause");
	return 0;
}