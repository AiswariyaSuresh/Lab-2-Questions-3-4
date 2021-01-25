#include "Line.h"
#include <iostream>
#include <cmath>

using namespace std;

Line::Line() 
{
	slope = 0;
	intercept = 0;
}

Line::Line(double k, double b)
{
	slope = k;
	intercept = b;
}

void Line::Print()
{
	cout.setf(ios::fixed);
	cout.precision(3);		//formats print statements so decimal numbers have only 3 digits right of the decimal point
	cout << "The line is y = " << slope << " * x + " << intercept << endl;
}

bool Line::operator == (const Line& l2) const
{
	return ((l2.slope == slope) && (l2.intercept == intercept));
}

double Line::operator * (double n)
{
	slope *= n;
	return slope;
}

double Line::operator + (double n)
{
	intercept += n;
	return intercept;
}
