#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	double x;
	cin >> a >> b >> c >> d;
	if (c == 0 && d == 0)
	{
		return EXIT_SUCCESS;
	}
	else
	{
		if (a != 0)
		{
			if (b % a == 0)
			{
				x = -b / a;
				if (c * x + d == 0)
				{
					cout << "NO";
				}
				else
				{
					cout << x;
				}
			}
			else
			{
				cout << "NO";
			}
		}
		else
		{
			if (b == 0)
			{
				cout << "INF";
			}
		}

	}
	return EXIT_SUCCESS;
}
