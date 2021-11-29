#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int width = 120;
	int height = 30;
	float pod = (float)width / height;
	float pixpod = 11.0f / 24.0f;
	float a = 0.0f;
	float b = 0.0f;
	float c = 0.0f;
	float d = 0.0f;
	float e = 0.0f;
	float f = 0.0f;
	cout << "������ �������� ������ ������� �-�� 2��� � ���� ������� �� ������� �� -1 �� 1 �� ���� x y" << endl;
	cout << "������� ����������� ����� x^2: ";
	cin >> a;
	cout << endl << "������� ����������� ����� y^2: ";
	cin >> b;
	cout << endl << "������� ����������� ����� y*x: ";
	cin >> c;
	cout << endl << "������� ����������� ����� x: ";
	cin >> d;
	cout << endl << "������� ����������� ����� y: ";
	cin >> e;
	cout << endl << "������� ��������� �����������: ";
	cin >> f;
	cout << endl;

	char* scr = new char[width * height + 1];
	scr[width * height] = '/0';
	for (int i = 0; i < width; ++i)
	{
		for (int j = 0; j < height; ++j)
		{
			float x = (float)i / width * 2.0f - 1.0f;
			float y = -(float)j / height * 2.0f + 1.0f;
			x *= pod * pixpod;
			char pixel = ' ';
			if (a * x * x + b * y * y + c * x * y + d * x + e * y < f)
			{
				pixel = '@';
			}
			scr[i + j * width] = pixel;
		}
	}
	for (int i = 0; i < width; ++i)
	{
		for (int j = 0; j < height; ++j)
		{
			cout << scr[i * height + j];
		}
	}
	return EXIT_SUCCESS;
}
