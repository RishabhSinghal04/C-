/*
 * A program to calculate GCD (or HCF) and LCM of two numbers.
 * Calculate GCD using recursion.
 */

#include <iostream>
#include <conio.h>

using namespace std;

unsigned int GCD(unsigned int, unsigned int);
unsigned long long LCM(unsigned int, unsigned int, unsigned int);

int main()
{
    unsigned int num1, num2, hcf = 0;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    hcf = GCD(num1, num2);
    cout << "\nHCF or GCD of " << num1 << " and " << num2 << " is " << hcf;
    cout << "\nLCM of " << num1 << " and " << num2 << " is " << LCM(num1, num2, hcf);

    getch();
    return 0;
}

unsigned int GCD(unsigned int num1, unsigned int num2)
{
    return (num2 == 0) ? num1 : GCD(num2, num1 % num2);
}

unsigned long long LCM(unsigned int num1, unsigned int num2, unsigned int hcf)
{
    return num1 * num2 / hcf;
}