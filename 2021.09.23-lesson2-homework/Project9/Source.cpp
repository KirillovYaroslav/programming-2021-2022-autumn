#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;

	cin >> M >> N >> x >> y;

	if (x > M || M > 109 || x < 1 || y > N || y < 1 || N > 109)
	{
		return EXIT_SUCCESS;
	}
	else
	{
		if (x == 1)
		{
			if (y == 1)
			{
				cout << "(" << x << "," << y + 1 << ")"<<endl << "(" << x+1 << "," << y << ")";
			}
			else if (y == N)
			{
				cout << "(" << x << "," << y - 1 << ")" << endl << "(" << x + 1 << "," << y << ")";
			}
			else
			{
				cout << "(" << x << "," << y - 1 << ")" << endl << "(" << x + 1 << "," << y << ")" << endl << "(" << x << "," << y+1 << ")";
			}
		}
		else if (x == M)
		{
			if (y == 1)
			{
				cout << "(" << x << "," << y + 1 << ")" << endl << "(" << x - 1 << "," << y << ")";
			}
			else if (y == N)
			{
				cout << "(" << x << "," << y - 1 << ")" << endl << "(" << x - 1 << "," << y << ")";
			}
			else
			{
				cout << "(" << x << "," << y - 1 << ")" << endl << "(" << x - 1 << "," << y << ")" << endl << "(" << x << "," << y + 1 << ")";
			}
		}
		else if (y == 1)
		{
			cout << "(" << x << "," << y + 1 << ")" << endl << "(" << x - 1 << "," << y << ")" << endl << "(" << x + 1 << "," << y << ")";
		}
		else if (y == N)
		{
			cout << "(" << x << "," << y - 1 << ")" << endl << "(" << x - 1 << "," << y << ")" << endl << "(" << x + 1 << "," << y << ")";
		}
		else
		{
			cout << "(" << x << "," << y - 1 << ")" << endl << "(" << x - 1 << "," << y << ")" << endl << "(" << x + 1 << "," << y << ")" << endl << "(" << x << "," << y + 1 << ")";
		}

	}

	return EXIT_SUCCESS;
}
