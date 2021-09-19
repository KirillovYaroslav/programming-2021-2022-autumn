#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int n;
	cin >> n;
	cout << n / 100 + n % 10 + (n / 10) % 10;
}
