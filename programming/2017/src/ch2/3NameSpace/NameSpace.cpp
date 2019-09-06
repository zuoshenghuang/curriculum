#include <iostream>
#include <cmath>

void show()
{
	std::cout << __FUNCTION__ << std::endl;
	printf("global show\n");
}

namespace circle
{
	void show()
	{
		std::cout << __FUNCTION__ << std::endl;
		printf("A Circle\n");
	}
}

namespace heart
{
	void show()
	{
		std::cout << __FUNCTION__ << std::endl;
		float y, x, a;
		for (y = 1.5f; y > -1.5f; y -= 0.1f)
		{
			for (x = -1.5f; x < 1.5f; x += 0.05f)
			{
				a = x*x + y*y - 1;
				putchar(a*a*a - x*x*y*y*y <= 0.0f ? '*' : ' ');
			}
			putchar('\n');
		}
	}
}
int main()
{
	//show();
	::show();
	//circle::show();
	//heart::show();

	system("pause");
	return 0;
}

