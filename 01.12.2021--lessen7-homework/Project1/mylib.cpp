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

int sc = 0;

int threenplusone(int a)
{
	if (a % 2 == 0)
	{
		a = a / 2;
		sc++;
		return threenplusone(a);
	}
	else if (a != 1 && a % 2 == 1)
	{
		a = a * 3 + 1;
		sc++;
		return threenplusone(a);
	}
	else
	{
		return sc;
	}
}