#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int x1 = 0;
	int y1 = 0;
	int max1 = 0;
	int min1 = 0;
	int max2 = 0;
	int min2 = 0;
	
	if (x > x1)
	{
		max1 = x;
		min1 = x1;
	}
	else
	{
		max1 = x1;
		min1 = x;
	}
	if (y > y1)
	{
		max2 = y;
		min2 = y1;
	}
	else
	{
		max2 = y1;
		min2 = y;
	}

	cin >> x >> y >> x1 >> y1;

	if ((x == x1) || (y == y1) || (max1 - min1 == max2 - min2))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return EXIT_SUCCESS;
}
