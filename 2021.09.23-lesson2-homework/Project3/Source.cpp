#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	int promejutok = 0;
	int time = 0;

	cin >> k >> m >> n;

	m *= 2;
	promejutok = n % k;
	time += (m * (n / k));

	if (promejutok != 0)
	{
		cout << time + m;
	}
	else
	{
		cout << time;
	}

	return EXIT_SUCCESS;
}
