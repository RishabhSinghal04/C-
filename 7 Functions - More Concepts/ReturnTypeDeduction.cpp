
#include <iostream>
#include <conio.h>

using namespace std;

auto fun(int value)
{
    return (value > 10) ? static_cast<double>(22) : 324.435; // return double literal
}

int main()
{
    cout << fun(3);

    getch();
    return 0;
}