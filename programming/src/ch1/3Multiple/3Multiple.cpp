#include "Shape.h"
#include "Heart.h"
// include "" <>

int main()
{
	heart::show();

	int ra = RECT_AREA(3, 3 + 1);
	int wa = W_RECT_AREA(3, 3 + 1);
	std::cout << ra << "\t" << wa << std::endl;

	system("pause");
	return 0;
}

