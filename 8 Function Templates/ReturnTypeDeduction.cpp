
#include <iostream>
#include <conio.h>

using namespace std;

template <typename P1, typename P2>
auto minimum(P1 a, P2 b)
{
    return (a < b) ? a : b;
}

int main()
{
    const int num1 = 2645764;
    const double num2 = 2859.2456346;

    auto min_value = minimum(num1, num2); // largest return type deduced
    cout << min_value << '\n'
         << sizeof(min_value);

    getch();
    return 0;
}