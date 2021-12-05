#include <iostream>
#include "mylib.h"

using namespace std;

int main(int argc, char* argv[])
{
	int r = 0;
	cin >> r;
	circle(r);
	cout << endl << endl;
	
	int a = 0;
	cin >> a;
	cout << threenplusone(a);

	return EXIT_SUCCESS;
}