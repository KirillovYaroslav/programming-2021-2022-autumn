#include <iostream>

using namespace std;

int nod(int a, int b)
{
	while (b)
	{
		a = a % b;
		int c = 0;
		c = a;
		a = b;
		b = c;
	}
	return a;
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	cin >> a >> b;

	cout << a * b / nod(a, b);

	return EXIT_SUCCESS;
}
