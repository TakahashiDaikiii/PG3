#include "Circle.h"
#include <stdio.h>

void Circle::Size()
{
	radius = 32;

	area = radius * radius * pi;
}

void Circle::Draw()
{
	printf("円の面積%d\n", area);
}