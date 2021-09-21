#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a=0, b=0;
	cin >> a >> b;
	cout << (abs(a + b) + abs(a - b)) / 2;
	return EXIT_SUCCESS;
}
