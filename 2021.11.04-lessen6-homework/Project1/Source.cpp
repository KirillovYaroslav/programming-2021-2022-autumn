#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	bool ex = false;
	int n = 1;
	int* arr = new int[n] { 0 };
	int ch = 0;


	cout << "0. ����� �� ���������." << endl;
	cout << "1. ����� �������� ��������� �������." << endl;
	cout << "2. �������� ������� � ����� �������.���� capacity �� �������, ��� ������ ���������� �� 2." << endl;
	cout << "3. �������� ������� � ������ �������." << endl;
	cout << "4. ������� ������� �� ����� �������." << endl;
	cout << "5. ������� ������� �� ������ �������." << endl;
	cout << "6. ���������� ������.�������� ������� ������ ������ � �������" << endl;


	while (!ex)
	{

		char c = _getch();
		
		switch (c)
		{
			//0
			case 48:
			{
				ex = true;
				break;
			}
			//1
			case 49:
			{
				cout << endl;
				for (int i = 0; i < ch; ++i)
				{
					cout << arr[i]<<endl;
				}
				break;
			}
			//2
			case 50:
			{
				if (ch < n)
				{
					cin >> arr[ch];
					ch++;
				}
				else
				{
					n *= 2;
					int* newarr = new int [n] { 0 };
					for (int i = 0; i < n; ++i)
					{
						newarr[i] = arr[i];
					}
					delete[] arr;
					arr = newarr;

					cin >> arr[ch];
					ch++;
				}
				break;
			}
			//3
			case 51:
			{
				if (ch < n)
				{
					for (int i = ch-1; i >= 0; --i)
					{
						arr[i + 1] = arr[i];
					}
					cin >> arr[0];
					ch++;
				}
				else
				{
					n *= 2;
					int* newarr = new int [n] { 0 };
					for (int i = 0; i < n; ++i)
					{
						newarr[i] = arr[i];
					}
					delete[] arr;
					arr = newarr;

					for (int i = ch - 1; i >= 0; --i)
					{
						arr[i + 1] = arr[i];
					}
					cin >> arr[0];
					ch++;

				}
				break;
			}
			//4
			case 52:
			{
				if (ch != 0)
				{
					int* newarr = new int [n] { 0 };
					for (int i = 0; i < ch - 1; ++i)
					{
						newarr[i] = arr[i];
					}
					delete[] arr;
					arr = newarr;
					ch--;
				}
				break;
			}
			//5
			case 53:
			{
				if (ch != 0)
				{
					int* newarr = new int [n] { 0 };
					for (int i = 0; i < ch - 1; ++i)
					{
						newarr[i] = arr[i+1];
					}
					delete[] arr;
					arr = newarr;
					ch--;
				}
				break;
			}
			//6
			case 54:
			{
				int* newarr = new int [n] { 0 };
				for (int i = 0; i < ch ; ++i)
				{
					newarr[i] = arr[ch-1-i];
				}
				delete[] arr;
				arr = newarr;
			}
		}

	}
	return EXIT_SUCCESS;
}

