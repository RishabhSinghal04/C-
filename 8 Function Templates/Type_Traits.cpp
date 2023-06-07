
#include <iostream>
#include <conio.h>
#include <type_traits>

using namespace std;

template <typename P>
void print_number(P n)
{
    static_assert(is_integral_v<P>, "Must be an integral argument");
    cout << n;
}

int main()
{
    const int n = 29375;

    cout << boolalpha;
    cout << "is_integral<int> : " << is_integral<int>::value << '\n';
    cout << "is_integral<double> : " << is_integral<double>::value << '\n';
    cout << "is_floating_point<int> : " << is_floating_point<int>::value << '\n';
    cout << "is_floating_point<float> : " << is_floating_point<float>::value << '\n';

    print_number(n);
    cout << '\n';

    getch();
    return 0;
}