#include <iostream>
#define M 100

using namespace std;

int main()
{
	int n = 0;

	cin >> n;
	//1)
	int a[M] = { 0 };
	cout << endl;
	//2)
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cout << endl;
	//3)
	{
		cout << "ARRAY: ";
		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}

	//4)
	{
		cout << "EVEN: ";
		for (int i = 0; i < n; ++i)
		{
			if (a[i] % 2 == 0)
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}

	//5)
	{
		cout << "SUM: ";

		int sum = 0;

		for (int i = 0; i < n; ++i)
		{
			sum += a[i];
		}
		cout << sum << endl;
	}

	//6)
	{
		cout << "PRODUCT OF NEGATIVE: ";

		int product_of_negative = 1;

		for (int i = 0; i < n; ++i)
		{
			if (a[i] < 0)
			{
				product_of_negative *= a[i];
			}
		}
		cout << product_of_negative << endl;
	}

	//7)
	{
		cout << "FIRST MIN INDEX: ";

		int first_min_index = a[0];

		for (int i = 0; i < n; ++i)
		{
			if (a[i] < a[first_min_index])
			{
				first_min_index = i;
			}
		}

		cout << first_min_index << endl;
	}

	//8)
	{
		cout << "SECOND MAX: ";

		int max = 0;
		int second_max = 0;

		if (a[1] < a[0])
		{
			max = a[0];
			second_max = a[1];
		}
		else
		{
			max = a[1];
			second_max = a[0];
		}

		for (int i = 0; i < n; ++i)
		{
			if (max <= a[i])
			{
				second_max = max;
				max = a[i];
			}
		}

		cout << second_max << endl;
	}

	//9
	{
		cout << "REVERSE: ";
		for (int i = 0; i < n; ++i)
		{
			cout << a[n - 1 - i] << " ";
		}
		cout << endl;
	}

	//10)
	{
		cout << "ODD INDEXES: ";

		for (int i = 0; i < n; ++i)
		{
			if (i % 2 == 1)
			{
				cout << a[i] << " ";
			}
		}
	}

	return EXIT_SUCCESS;
}
