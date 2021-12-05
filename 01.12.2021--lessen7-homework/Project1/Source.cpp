#include <iostream>
#include "mylib.h"

using namespace std;

int main(int argc, char* argv[])
{
	int r;
	cin >> r;
	circle(r);
	cout << endl << endl;
	
	int a;
	cin >> a;
	cout << threenplusone(a);

	return EXIT_SUCCESS;
}