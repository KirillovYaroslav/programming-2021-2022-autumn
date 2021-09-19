#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int v, t;
	cin >> v >> t;
	int s = v * t;

	cout << ((s % 109) + 109) % 109;
}
