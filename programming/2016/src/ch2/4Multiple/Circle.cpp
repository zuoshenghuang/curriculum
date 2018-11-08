#include "Shape.h"

// 函数声明，不用写参数名
// 函数定义，参数名 r
float circle_circumference(float r)
{

	// PI 在预编译处理过程中，会被替换为 3.1415926
	// return 2 * 3.1415926 * r;
	return 2 * PI * r;
}