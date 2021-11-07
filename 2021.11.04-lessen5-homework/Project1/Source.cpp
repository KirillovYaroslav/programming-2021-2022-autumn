#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	float n = 0;

	cin >> n;

	int value = *((int*) & n);
	int bitmask = 1;
	bitmask = ~ (bitmask << (sizeof(int) * 8 - 1));
	value = value & bitmask;
	float abc_n = *((float*)&value);

	cout << abc_n;

	return EXIT_SUCCESS;
}