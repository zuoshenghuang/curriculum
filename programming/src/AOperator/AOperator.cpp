#include<iostream>
#include "Vector3D.h"

std::ostream& operator<<(std::ostream &os, const Vector3D & v)
{
	os << "(" << v.x << "," << v.y << "," << v.z << ")";
	return os;
}

int main()
{
	Vector3D a(1, 0, 0);
	Vector3D b(0, 1, 0);
	Vector3D vsum = a + b;

	std::cout << vsum << std::endl;

	system("pause");
	return 0;
}
