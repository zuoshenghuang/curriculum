#include<iostream>
using namespace std;
// argc 参数个数，就是argv中包含的字符串的数目
// argv 是一个字符串数组
// argv[0],就是程序本身的文件名
int main(int argc, char * argv[])
{
	cout << "OK, using namespace" << endl;

	cout << argc << endl;
	if (argc < 2)
	{
		cout << "not enough!" << endl;
		return 0;
	}	

	for (int i = 0; i < argc; i++)
		cout << argv[i] << endl;

	int result =  atoi(argv[1]) + atoi(argv[2]);

	cout << "result is :" <<result<< endl;



	system("pause");
	return 0;
}