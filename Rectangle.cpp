#include "Rectangle.h"

//x-cor and y-cor initialized to 0
Rectangle::Rectangle()
{
	xCoord = 5;
	yCoord = 4;
	width = 3;
	height = 2;
}

//xCoord and yCoord will now equal x and y
Rectangle::Rectangle(double x, double y, double w, double h)
{
	xCoord = x;
	yCoord = y;
	width = w;
	height = h;
}

//getCoords function are return functions
double Rectangle::getXCoord()
{
	return xCoord;
}

double Rectangle::getYCoord()
{
	return yCoord;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getHeight() 
{
	return height;
}





