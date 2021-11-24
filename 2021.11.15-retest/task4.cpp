#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int* A = new int[n] { 0 };
	int min = 1001;
	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
		if (A[i] < min)
		{
			min = A[i];
		}
		if (A[i] > max)
		{
			max = A[i];
		}
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		if (A[i] == max)
		{
			A[i] = min;
		}
		cout << A[i] << " ";
	}

	return EXIT_SUCCESS;
}
