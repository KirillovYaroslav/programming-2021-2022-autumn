#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int sum = 0;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		sum += a;
	}

	cout << sum;

	return EXIT_SUCCESS;
}
