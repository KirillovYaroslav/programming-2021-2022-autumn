#include <iostream>
using namespace std;
int sred(int a, int b, int c)
{
	if ((b >= a && a >= c) || (c >= a && a >= b))
	{
		return a;
	}
	else
	{
		if ((a >= b && b >= c) || (c >= b && b >= a))
		{
			return b;
		}
		else
		{
			return c;
		}
	}

}
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;


	if (a < b + c && b < a + c && c < a + b)
	{
		if ((-max(a, max(b, c)) * max(a, max(b, c)) + sred(a, b, c) * sred(a, b, c) + min(a, min(b, c)) * min(a, min(b, c))) < 0)
		{
			cout << "obtuse";
		}
		else
		{
			if ((-max(a, max(b, c)) * max(a, max(b, c)) + sred(a, b, c) * sred(a, b, c) + min(a, min(b, c)) * min(a, min(b, c))) > 0)
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
