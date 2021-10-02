#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int sred = 0;
	int max = 0;
	int min = 0;
	cin >> a >> b >> c;

	if ((b >= a && a >= c) || (c >= a && a >= b))
	{
		sred = a;
	}
	else
	{
		if ((a >= b && b >= c) || (c >= b && b >= a))
		{
			sred = b;
		}
		else
		{
			sred = c;
		}
	}

	if (a >= b && a >= c)
	{
		max = a;
	}
	else
	{
		if (a <= b && b >= c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}

	if (a <= b && a <= c)
	{
		min = a;
	}
	else
	{
		if (a >= b && b <= c)
		{
			min = b;
		}
		else
		{
			min = c;
		}
	}

	if (a < b + c && b < a + c && c < a + b)
	{
		if ((-max * max + sred * sred + min * min) < 0)
		{
			cout << "obtuse";
		}
		else
		{
			if (-max * max + sred * sred + min * min > 0)
			{
				cout << "acute";
			}
			else
			{
				cout << "right";
			}
		}
	}
	else
	{
		cout << "impossible";
	}

	return EXIT_SUCCESS;
}