/*
 * Base ^ Exponent using recursion
 */

#include <iostream>
#include <conio.h>

using namespace std;

long long power(short, unsigned short);

int main()
{
    short base;
    unsigned short exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << " ^ " << exponent << " = " << power(base, exponent);

    getch();
    return 0;
}

long long power(short base, unsigned short exponent)
{
    return (exponent == 0) ? 1 : base * power(base, exponent - 1);
}