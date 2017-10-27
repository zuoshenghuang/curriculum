#include<iostream>

int main()
{
	const char * buf = "good\n";
	fwrite(buf, 1, strlen(buf), stdout);
	fwrite(buf, 1, strlen(buf), stderr);
	
	fprintf(stderr, "test ok ? %s", buf);

	std::cout << "OK" << std::endl;


	std::cout << __FILE__ << "\t" << __LINE__ << std::endl;

	system("pause");
	return 0;
}