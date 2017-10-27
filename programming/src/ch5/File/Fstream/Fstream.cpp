#include <iostream>
#include <fstream>


void test_read()
{
	const char * file_name = "test.txt";  //  相对路径
	std::ifstream in(file_name);

	if (!in.is_open())
	{
		std::cout << "cannot open the file" << std::endl;
		return;
	}

	char buffer[100];
	while (!in.eof())
	{
		in.getline(buffer, 100);			// 一行一行地读
		std::cout << buffer << std::endl;
		
	}
	
	in.close();								//  非常重要
}

void test_write()
{
	const char * file_name = "out.txt";  //  相对路径										

	std::ofstream out("out.txt");
	if (!out.is_open())
	{
		std::cout << "cannot open the file" << std::endl;
		return;
	}
	
	out << "this line is not over,";
	out << "continue\n";
	out << "This is another line.\n";
	out.close();

}

int main()
{
	test_read();
	test_write();
	system("pause");
    return 0;
}

