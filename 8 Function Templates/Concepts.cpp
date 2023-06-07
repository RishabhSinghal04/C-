
#include <iostream>
#include <conio.h>
#include <concepts>

using namespace std;

template <typename P>
    requires integral<P> // OR requires is_integral_v<P> // using a type trait
P minimum(P a, P b)
{
    return (a < b) ? a : b;
}

template <integral P>
P maximum(P a, P b)
{
    return (a > b) ? a : b;
}

template <typename P>
P product(P a, P b)
    requires integral<P>
{
    return a * b;
}

auto addition(integral auto a, integral auto b)
{
    return a + b;
}

int main()
{
    const int n = 45, m = 90;

    cout << minimum(n, m) << '\n'
         << maximum(n, m) << '\n'
         << product(n, m) << '\n'
         << addition(n, m) << '\n';

    getch();
    return 0;
}