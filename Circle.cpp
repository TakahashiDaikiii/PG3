﻿#include "Circle.h"
#include <stdio.h>

void Circle::Size()
{
	radius = 32;

	area = radius * radius * pi;
}

void Circle::Draw()
{
	printf("‰~‚Ě–ĘĎ@%d\n", area);
}