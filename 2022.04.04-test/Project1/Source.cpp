#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
	fraction fr1(3, 1);
	fraction fr2(5, -2);
	cout << fr1 * fr2 << endl;
	cout << fr1 / fr2 << endl;
	cout << 1 / (3 * fr1 + 4 * fr2) << endl;
	cout << fr1.abs() << endl;
	cout << fr1.reverse() << endl;
	cout << fr1.pow(3) << endl;
	cout << fr1 - 3;
	return 0;
}
