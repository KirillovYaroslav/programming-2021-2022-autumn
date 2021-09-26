#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n = 0;

	cin >> n;

	int a = 0;
	int b = 0;
	int c = 0;

	a = n / 100;
	b = n / 10 - (n / 100) * 10;
	c = n % 10;
	if (a!=0 || b!=0 || c!=0)
	{
		switch (a)
		{
		case 1:
			cout << "сто ";
			break;
		case 2:
			cout << "двесте ";
			break;
		case 3:
			cout << "тристо ";
			break;
		case 4:
			cout << "четиресто ";
			break;
		case 5:
			cout << "пятьсот ";
			break;
		case 6:
			cout << "шестьсот ";
			break;
		case 7:
			cout << "семьсот ";
			break;
		case 8:
			cout << "восемьсот ";
			break;
		case 9:
			cout << "девятьсот ";
			break;
		}

		if (10 * b + c >= 20 && 10 * b + c < 100)
		{
			switch (b)
			{
			case 0:
				break;
			case 2:
				cout << "двадцать ";
				break;
			case 3:
				cout << "тридцать ";
				break;
			case 4:
				cout << "сорок ";
				break;
			case 5:
				cout << "пятьдесят ";
				break;
			case 6:
				cout << "шестьдесят ";
				break;
			case 7:
				cout << "семьдесят ";
				break;
			case 8:
				cout << "восемьдесят ";
				break;
			case 9:
				cout << "девяносто ";
				break;
			}
		}
		else if(10 * b >= 10)
		{
			switch (c)
			{
			case 0:
				cout << "десять бананов";
				break;
			case 1:
				cout << "одинадцать бананов";
				break;
			case 2:
				cout << "двенадцать бананов";
				break;
			case 3:
				cout << "тринадцать бананов";
				break;
			case 4:
				cout << "четырнадцать бананов";
				break;
			case 5:
				cout << "пятнадцать бананов";
				break;
			case 6:
				cout << "шестнадцать бананов";
				break;
			case 7:
				cout << "семнадцать бананов";
				break;
			case 8:
				cout << "восемнадцать бананов";
				break;
			case 9:
				cout << "девятнадцать бананов";
				break;
			}
		}
		
		if(b * 10 + c > 20 || b * 10 + c < 10)
		{
			switch (c)
			{
			case 0:
				cout << "бананов";
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
		}
	}
	else
	{
	cout << "нет бананов";
	}

	return EXIT_SUCCESS;
}
