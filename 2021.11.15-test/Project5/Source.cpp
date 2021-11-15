#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	cin >> n >> m;
	int* N = new int[n] { 0 };
	int* M = new int [m] { 0 };

	for (int i = 0; i < n; ++i)
	{
		cin >> N[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (N[i] > N[j])
			{
				int c = 0;
				c = N[i];
				N[i] = N[j];
				N[j] = c;
			}
		}
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> M[i];
	}
	for (int i = 0; i < m; ++i)
	{
		for (int j = i + 1; j < m; ++j)
		{
			if (M[i] > M[j])
			{
				int c = 0;
				c = M[i];
				M[i] = M[j];
				M[j] = c;
			}
		}
	}
	int* A = new int[m + n];
	int sc = 0;
	int k = 0;
	int i = N[0];
	while (sc < n)
	{
		while (N[sc] > M[k])
		{
			k++;
		}

		if (N[sc] == M[k] && M[k] != i)
		{
			i = N[sc];
			cout << N[sc] << " ";
		}
		else if (N[sc] == M[k] && sc == 0)
		{
			cout << N[sc] << " ";
		}

		sc++;
	}

	return EXIT_SUCCESS;
}