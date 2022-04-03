#include <iostream>
#include "Header.h"
#include <cmath>

using namespace std;

int main()
{
	complnum z1(3, 1);
	complnum z2(5, -2);
	cout << z1 * z2 << endl;
	cout << z1 / z2 << endl;
	cout << 3 * z1 + 4 * z2 << endl;
	cout << z1.abc() << endl; //модуль числа
	cout << z2.arg() << endl; //аргумент числа
	cout << z1.reverse() << endl; //обратное число
	z1.solution_of_equation(5); //вывод в поток cout формулы корней пятой степени
	return 0;
	return EXIT_SUCCESS;
}