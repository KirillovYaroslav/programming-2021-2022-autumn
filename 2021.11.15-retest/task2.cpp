#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	if(n>=2 && n<=200000)
	{
		int* A = new int[n] { 0 };
		for (int i = 0; i < n; ++i)
		{
			cin >> A[i];
		}
		int max = 0;
		int min = 0;

		max = A[1];
		min = A[0];

		for (int i = 0; i < n; i += 2)
		{
			if (A[i] < min)
			{
				min = A[i];
			}
		}

		for (int i = 1; i < n; i += 2)
		{
			if (A[i] > max)
			{
				max = A[i];
			}
		}

		cout << endl << max + min;
	}

	return EXIT_SUCCESS;
}
