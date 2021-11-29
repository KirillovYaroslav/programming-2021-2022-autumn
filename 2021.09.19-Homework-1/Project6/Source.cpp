#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	cout << n - (n % 2) + 2;
	return EXIT_SUCCESS;
}
