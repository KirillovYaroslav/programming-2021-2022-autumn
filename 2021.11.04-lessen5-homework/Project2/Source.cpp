#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    double d = 0;

    cin >> d;

    long long value = *((long long*)&d);

    for (long long i = 0; i < sizeof(long long) * 8; ++i)
    {
        unsigned long long a = 1;
        long long currentbit = (sizeof(long long) * 8 - i - 1);
        long long bitmask = a << currentbit;

        long long bit = value & bitmask;
        bit = bit >> currentbit;
        cout << bit;
        if ((i + 1) % 4 == 0)
        {
            cout << " ";
        }
    }

    return EXIT_SUCCESS;
}