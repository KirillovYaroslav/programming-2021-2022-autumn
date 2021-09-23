#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;//котлет на сковороде
	int m = 0;//минут жарить
	int n = 0;//всего котлет
	int promejutok = 0;//котлет не поместившехся на сковороду после кого-то к-ва операций
	int time = 0;//итоговое время

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