#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int null = 0;
	int negative = 0;
	int positive = 0;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		if (a == 0)
		{
			++null;
		}
		if (a < 0)
		{
			++negative;
		}
		if (a > 0)
		{
			++positive;
		}
	}

	cout << null << " " << positive << " " << negative;

	return EXIT_SUCCESS;
}
