
#include <iostream>
#include <conio.h>

using namespace std;

template <typename P, long long n>
P maximum(P a, P b)
{
    return (a > b) ? a + n : b + n;
}

int main()
{
    const int a = 346, b = 346357;

    cout << maximum<long long, 89>(a, b);

    getch();
    return 0;
}