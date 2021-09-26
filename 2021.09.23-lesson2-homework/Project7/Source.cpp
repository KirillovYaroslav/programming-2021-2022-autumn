#include <iostream>

using namespace std;

int main()
{
    int n = 0;//шир
    int m = 0;//длин
    int k = 0;//к-во долек

    cin >> n >> m >> k;

    if (k != m * n)
    {
        if (k % n == 0 && k / n <= m)
        {
            cout << "YES";
        }
        else
        {
            if (k % m == 0 && k / m <= n)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }

        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_SUCCESS;
    }
}
