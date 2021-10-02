#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    
    cin >> a >> b;

    cout << (a * (a / b) + b * (b / a)) / (a / b + b / a);

    return EXIT_SUCCESS;
}
