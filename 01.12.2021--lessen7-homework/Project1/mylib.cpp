#include "mylib.h"
#include <iostream>


void circle(int r)
{
	for (int i = 0; i <= 2 * r; ++i)
	{
		for (int j = 0; j <= 2 * r; ++j)
		{
			if (abs(- r * r + (i - r) * (i - r) + (j - r) * (j - r)) <= 3)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}
}



int threenplusone(int a)
{
	int sc = 0;

	while (a != 1)
	{
		if (a % 2)
		{
			a = 3 * a + 1;
		}
		else
		{
			a = a / 2;
		}
		sc++;
	}
	return sc;
}