
#include <iostream>
#include <conio.h>

using namespace std;

template <typename P1, typename P2>
auto maximum(P1 a, P2 b) -> decltype((a > b) ? a : b)
{
    return (a > b) ? a : b;
}

template <typename P1, typename P2>
decltype(auto) minimum(P1 a, P2 b)
{
    return (a < b) ? a : b;
}

template <typename P1, typename P2>
auto product(P1 a, P2 b)
{
    return a * b;
}

int main()
{
    const int num1 = 23534;
    const double num2 = 35635.58489;

    cout << fixed << maximum(num1, num2) << '\n'
         << minimum(num1, num2) << '\n'
         << product(num1, num2) << '\n';

    getch();
    return 0;
}