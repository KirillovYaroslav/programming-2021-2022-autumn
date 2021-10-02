#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int  k = 0;
	int  scn = 1;
	int  sck = 1;
	int  scnk = 1;

	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
	{
		scn *= i;
	}

	for (int i = 1; i <= k; ++i)
	{
		sck *= i;
	}

	for (int i = 1; i <= n - k; ++i)
	{
		scnk *= i;
	}

	cout << scn / (sck * scnk);

	return EXIT_SUCCESS;
}
