#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	cin >> n;

	++k;
	for (int i = 1; i <= n; ++i)
	{
		k *= i;
	}
	cout << k;

	return EXIT_SUCCESS;
}
