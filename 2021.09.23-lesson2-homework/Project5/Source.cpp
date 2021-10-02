#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	cin >> n >> k;

	if (n > 30000)
	{
		return EXIT_SUCCESS;
	}
	else
	{
		if (4 * n - 4 == k)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	return EXIT_SUCCESS;
}
