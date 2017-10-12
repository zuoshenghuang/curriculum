#include <iostream>
#include"Compare.h"

class Rectangle
{
private:
	int width;
	int height;

public:
	Rectangle(int w, int h) : width(w), height(h) {}
	float area() { return width * height; }

	bool operator == (const Rectangle & other)
	{
		if ((width == other.width) && (height == other.height))
			return true;

		if ((width == other.height) && (height == other.width))
			return true;

		return false;
	}

	Rectangle& operator = (const Rectangle & other)
	{
		width = other.width;
		height = other.height;

		return *this;
	}
};

int main()
{

	Rectangle A(3, 4);
	Rectangle B(4, 3);

	Compare<Rectangle> cd;
	if (cd.equal(A, B))
	{
		std::cout << "A == B" << std::endl;
	}
	else
	{
		std::cout << "A != B" << std::endl;
	}

	float a = 3.145;
	float b = 3.1456;

	Compare<float> cr;
	bool ret = cr.equal(a, b);
	if (ret)
	{
		std::cout << "A == B" << std::endl;
	}
	else
	{
		std::cout << "A != B" << std::endl;
	}
	system("pause");
	return 0;
}

