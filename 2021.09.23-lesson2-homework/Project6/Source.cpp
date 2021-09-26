#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int x1 = 0;
	int y1 = 0;
	
	cin >> x >> y >> x1 >> y1;

	if ((x == x1) || (y == y1) || (max(x, x1) - min(x, x1) == max(y, y1) - min(y, y1)))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return EXIT_SUCCESS;
}
