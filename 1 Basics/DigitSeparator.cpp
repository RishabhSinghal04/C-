
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const int n1 = 10'000'000, n2 = -10'000'000;
    const float f1 = 10'000'000.000'000F;
    const long long n = 100'900'700'429'090'090;

    cout << n1 << '\n'
         << n2 << '\n'
         << fixed << f1 << '\n'
         << n;

    getch();
    return 0;
}