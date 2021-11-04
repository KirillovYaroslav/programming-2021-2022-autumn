#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0; 
	int b = 0;//ch1
	int c = 0;//ch2

	cin >> a >> b >> c;

	int b_bit = 0;
	int c_bit = 0;
	 
	b_bit = (a & (1 << b)) >> b;
	a = a & (~(1 << b));
	
	c_bit = (a & (1 << c)) >> c;
	a = a & (~(1 << c));

	a = a | (b_bit << c) | (c_bit << b);

	cout << a;

	return EXIT_SUCCESS;
}