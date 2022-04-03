#include <iostream>
#include "Header.h"
#include <cmath>

using namespace std;

int main()
{
	complnum z1(3, 1);
	complnum z2(5, -2);
	cout << z1 * z2 << endl;
	cout << z1 / z2 << endl;
	cout << 3 * z1 + 4 * z2 << endl;
	cout << z1.abs() << endl; 
	cout << z2.arg() << endl; 
	cout << z1.reverse() << endl; 
	z1.solution_of_equation(5);
	return 0;
	return EXIT_SUCCESS;
}