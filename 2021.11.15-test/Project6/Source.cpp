#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
    int t = 0;
    int sc = 1;
    int min = 10001;
    int max = -10001;
    while (cin >> t)
    {
        if (sc % 2 == 1)
        {
            if (min > t)
            {
                min = t;
            }
        }

        if (sc % 2 == 0)
        {
            if (max < t)
            {
                max = t;
            }
        }
        sc++;
    }

    cout << max + min;
}