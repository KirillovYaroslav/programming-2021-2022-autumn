#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	cin >> a >> b;

	for (int i = a; i <= b; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			if (j * j == i)
			{
				cout << i << " ";
				break;
			}
		}
	}

	return EXIT_SUCCESS;
}
