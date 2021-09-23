#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int v=0, t=0;
	cin >> v >> t;
	int s = v * t;
	cout << ((s % 109) + 109) % 109;
	return EXIT_SUCCESS;
}
