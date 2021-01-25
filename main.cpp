#include "Rectangle.h"
#include <iostream>

using namespace std;

//Is not returning the value inputted
int main()
{
	cout << "Creating a point with the default constructor: " << endl;
	double x, y, w, h;
	Rectangle p1, w1, h1;
	cout << "Creating a point with the parameterized constructor: " << endl;
	cout << "The point is ( " << p1.getXCoord() << ", " << p1.getYCoord() << "). The width is " <<w1.getWidth()<<". The height is " <<h1.getHeight()<<"." << endl;
}