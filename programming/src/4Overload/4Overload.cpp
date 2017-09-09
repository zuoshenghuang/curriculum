#include <iostream>
int max(int x, int y)
{
	return (x > y ? x : y);
}
float max(float x, float y)
{
	return (x > y ? x : y);
}
double max(double x, double y)
{
	return (x > y ? x : y);
}
using namespace std;
int main()
{
	cout << max('a', 'b') << endl;
	cout << max('a', 99) << endl;
	cout << max(100, 'a') << endl;
	//	cout << max('a', 12.3) << endl;
	//	cout << max(12, 12.3) << endl;
	//	cout << max(3.4f, 12.3) << endl;

	return 0;
}

