#pragma once

#define PI 3.1415

float area(float rad)
{
	return PI * rad * rad;
}

void test_area()
{
	float rad = 15.0;

	float res = area(rad);
}
