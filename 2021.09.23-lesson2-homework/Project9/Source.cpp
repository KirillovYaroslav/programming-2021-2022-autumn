#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
a:
	int x=0;
	goto b;
b:
	cout << x + 1;

	return EXIT_SUCCESS;
}