#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a, b;
	cin >> a >> b;
	cout << (abs(a + b) + abs(a - b)) / 2;
}
