
#include <iostream>
#include <conio.h>

#include "number.h"

template <typename T>
concept _Number = (std::integral<T> || std::floating_point<T>)&&(!std::same_as<bool, T> && (!std::same_as<char, T>));

template <_Number T, _Number U>
auto _add(T a, U b)
{
    return a + b;
}

int main()
{
    using namespace std;

    Number num_int(10'000);
    Number num_float(10'000.50F);

    cout << "Integer : " << num_int.getNumber()
         << "\nFloating Point : " << num_float.getNumber() << '\n';

    cout << '\n'
         << _add(1000, 49000) << '\n'
         << _add(23.23, 96.85);

    getch();
    return 0;
}