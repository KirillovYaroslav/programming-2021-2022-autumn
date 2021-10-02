#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	cin >> a >> b;

	cout << (a * (a / b) + b * (b / a)) / (a / b+ b / a);

	return EXIT_SUCCESS;
}
