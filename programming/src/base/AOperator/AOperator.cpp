#include<iostream>
#include "Vector3D.h"

int main()
{
	Vector3D a(1, 0, 0);
	Vector3D b(0, 1, 0);
	Vector3D vsum = a * b;

	float dot = a.X(b);
	std::cout << vsum << std::endl;
	std::cout << dot << std::endl;

	system("pause");
	return 0;
}
