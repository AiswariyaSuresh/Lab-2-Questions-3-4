#include "Line.h"
#include <iostream>

using namespace std;

int main() 
{
	double k, b;
	cout << "Enter the parameters for Line 1: " << endl;
	cin >> k >> b;
	Line l1(k, b);
	l1.Print();

	cout << "Enter the parameters for Line 2: " << endl;
	cin >> k >> b;
	Line l2(k, b);
	l2.Print();

	//Check if lines are equal
	cout << "Are these two lines equal? The answer is " << (l2 == l1) << endl;

	//Multiply slope by a constant
	double n;
	cout << "Enter a constant to mulitiply the slope by: " << endl;
	cin >> n;
	cout << "You wanted the slope to be multiplied by " << n << ". Here's the new slope for line 1: " << l1 * n << endl;

	//Add intercept by a constant
	cout << "Enter a constant to add the intercept by: " << endl;
	cin >> n;
	cout << "You wanted the intercept to be added by " << n << ". Here's the new intercept for line 1: " << l1 + n << endl;

	//Print new line 1
	l1.Print();
}