#include <iostream>
void test_read()
{
	// 绝对路径
	//E:\doc\课程\repos\programming\src\ch5\File\File\File.cpp 
	const char * file_name = "E:\\doc\\课程\\repos\\programming\\src\\ch5\\File\\File\\File.cpp";
	//const char * file_name = "test.txt";  //  相对路径
	//const char * file_name = "File.cpp";  //  相对路径

	FILE * fp;
	fopen_s(&fp, file_name, "r");
	if (!fp)
	{
		std::cout << "cannot find the file" << std::endl;
		return;
	}

	char buff[1000];
	memset(buff, 0, 1000);
	fread(buff, 1, 999, fp);
	std::cout << buff << std::endl;
	fclose(fp);
}

void test_write()
{
	const char * file_name = "out.txt";  //  相对路径										

	FILE * fp;
	fopen_s(&fp, file_name, "w");
	if (!fp)
		return;

	char str[] = "人最宝贵的是生命，生命对人来说只有一次。\
人的一生应当这样度过：当他回首往事时，不会因为碌碌无为，\n\
虚度年华而悔恨，也不会因为为人卑劣，生活庸俗而愧疚";	
	fwrite(str, 1, strlen(str)+1, fp);
//	std::cout << buff << std::endl;
	fclose(fp);						// 注释掉看看会怎样？
}


void test_get()
{
	const char * file_name = "test.txt";  //  相对路径

	FILE * fp;
	fopen_s(&fp, file_name, "r");
	if (!fp)
		return;

	char c = fgetc(fp);
	std::cout << c << std::endl;
	fseek(fp, 20, SEEK_CUR); // #define SEEK_CUR    1
							 // #define SEEK_END    2
							 // #define SEEK_SET    0
	c = fgetc(fp);
	std::cout << c << std::endl;
	c = fgetc(fp);
	std::cout << c << std::endl;

	fclose(fp);
}
int main()
{
	//test_read();
	//test_write();
	test_get();
	system("pause");
    return 0;
}

