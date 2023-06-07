
#include <iostream>
#include <conio.h>

using namespace std;

template <typename RT = long double, typename P1, typename P2>
RT maximum(P1 a, P2 b)
{
    return (a > b) ? a : b;
}

int main()
{
    const int num1 = 46247970;
    const long double num2 = 92750171904570925342.35762324L;

    auto max_num = maximum(num1, num2);
    cout << max_num << '\n'
         << sizeof(max_num) << '\n';

    auto max_num2 = maximum<double>(num1, num2);
    cout << max_num2 << '\n'
         << sizeof(max_num2) << '\n';

    getch();
    return 0;
}