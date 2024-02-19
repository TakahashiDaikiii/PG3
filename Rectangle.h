#pragma once
#include "IShape.h"
class Rectangle :public IShape
{

	void Size()override;

	void Draw()override;

private:
	
	int diagonal = 0;

};