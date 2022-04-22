#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	ArrayList a;
	int k = 0;

	for (int i = 0; i < 11; ++i)
	{
		k = rand() % 10;
		if (k % 3 == 0)
		{
			a.pushend(k);
		}
		else
		{
			a.pushbegin(k);
		}
	}
	cout << a <<endl;
	a.sort();
	cout << a;
	return EXIT_SUCCESS;
}