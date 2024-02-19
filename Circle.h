#pragma once
#include "IShape.h"
class Circle :public IShape
{

	void Size()override;

	void Draw()override;

private:

	
	int radius = 0;

	int pi = 3.14;

};