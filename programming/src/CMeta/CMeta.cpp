#include<iostream>

//计算m的n次方  
template<int m, int n>
struct POWER {
	static const int data = m * POWER<m, n - 1>::data;//递归调用  
};

//模板特化，终结递归  
template<int m>
struct POWER<m, 0> {
	static const int data = 1;
};

int main()
{
	//int res = POWER<3, 4>
	int res = POWER<3, 4>::data;

	std::cout << res << std::endl;

	system("pause");
	return 0;
}

