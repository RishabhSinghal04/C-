
#include <iostream>
#include <conio.h>

using namespace std;

void func_double(double d)
{
    cout << "floating point func... ";
}

void func_integral(int i)
{
    cout << "integral algo... ";
}

template <typename T>
void func(T t)
{
    if constexpr (is_integral_v<T>)
    {
        func_integral(t);
    }

    else if constexpr (is_floating_point_v<T>)
    {
        func_double(t);
    }
    else
    {
        static_assert(is_floating_point_v<T> || is_integral_v<T>, "Argument must be integral or floating point");
    }
}

int main()
{
    func(10);
    func(10.0);

    getch();
    return 0;
}