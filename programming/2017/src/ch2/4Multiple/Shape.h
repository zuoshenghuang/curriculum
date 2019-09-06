#pragma once
// 避免文件重复编译的方法，告诉编译器做一件事

#include <iostream>

#define PI 3.1415926
#define CIRCLE_AREA(r) PI*r*r
#define RECT_AREA(x, y) (x) * (y)
#define WRONG_RECT_AREA(x, y) x * y

// 函数声明，不用写参数名
float circle_circumference(float);
