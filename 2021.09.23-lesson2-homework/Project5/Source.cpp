#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = ;
	cin >> k;
	if (k > 30000)
	{
		return EXIT_SUCCESS;
	}
	else
	{
		k += 4;
		if (k % 4 == 0)
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
