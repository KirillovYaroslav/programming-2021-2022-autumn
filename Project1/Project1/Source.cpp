#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int sum = 0;
	ifstream fin("5int.txt");
	for (int i = 0; i < 3; ++i)
	{
		int a;
		fin >> a;
		sum += a;
	}
	cout << sum;

}