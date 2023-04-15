/*
 * Base ^ Exponent without using pow function
 */

#include <iostream>
#include <conio.h>

using namespace std;

long long integerPower(int, unsigned short);

int main()
{
    unsigned short exponent;
    int base;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    cout << integerPower(base, exponent);

    getch();
    return 0;
}

long long integerPower(int base, unsigned short exponent)
{
    long long result = 1;

    while (exponent > 0)
    {
        if (exponent & 1 == 1)
        {
            result *= base;
        }
        base *= base;
        exponent >>= 1;
    }
    return result;
}