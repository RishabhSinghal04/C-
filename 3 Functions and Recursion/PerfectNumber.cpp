/*
 * A program to check whether a number is perfect or not
 */

#include <iostream>
#include <conio.h>

using namespace std;

bool isPerfectNumber(unsigned int);

int main()
{
    unsigned int num;

    cout << "Enter a number: ";
    cin >> num;

    isPerfectNumber(num) ? cout << num << " is a Perfect Number" : cout << num << " is not a Perfect Number";

    getch();
    return 0;
}

bool isPerfectNumber(unsigned int num)
{
    unsigned long long sumFactors = 0;

    for (size_t i = 1; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            sumFactors += i;
        }
        if (sumFactors > num)
        {
            break;
        }
    }
    return (sumFactors == num) ? true : false;
}