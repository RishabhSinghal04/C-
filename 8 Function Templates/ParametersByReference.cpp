
#include <iostream>
#include <conio.h>

using namespace std;

template <typename T>
const T &addition(const T &a, const T &b)
{
    cout << "Address of a is " << &a << "\nAddress of b is " << &b << '\n';
    const T &sum = a + b;
    return sum;
}

int main()
{
    const int integer1 = 10, integer2 = 40;
    const double floatingPoint1 = 45636.0984, floatingPoint2 = 098312.35762345674632;

    cout << &integer1 << '\n'
         << &integer2 << '\n'
         << &floatingPoint1 << '\n'
         << &floatingPoint2 << '\n';

    auto res = addition(integer1, integer2);
    auto res2 = addition(floatingPoint1, floatingPoint2);

    getch();
    return 0;
}