#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
	int k = 0;
	cin >> k;
	int* A = new int[k] { 0 };
	int n = 0;
	int m = 0;
	int t = 0;
	for (int i = 0; i < k; ++i)
	{
		cin >> n >> m;
		if (0 <= n && n <= 1000 && m >= 0 && m <= 26 * n * n)
		{
			A[t] = 19 * m + ((n + 239) * (n + 366) / 2);
			t++;
		}
	}
	for (int i = 0; i < t; ++i)
	{
		cout << A[i] << " ";
	}

	return EXIT_SUCCESS;
}
