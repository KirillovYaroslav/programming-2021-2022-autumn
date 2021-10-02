#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n = 0;
    int k = 0;
    int t = 0;

    cin >> n;

    ++k;
    ++t;
    while (t <= n)
    {
        int sc = k;
        while (sc != 0)
        {
            --sc;
            if (t > n)
            {
                return EXIT_SUCCESS;
            }
            cout << setw(1) << t << " ";
            ++t;
        }
        cout << endl;
        ++k;
    }

    return EXIT_SUCCESS;
}
