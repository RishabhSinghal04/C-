/*
 * A program to check whether a number is prime or not
 */

#include <iostream>
#include <conio.h>

using namespace std;

bool isPrimeNumber(unsigned long long);
bool primeNumberIteration(unsigned long long);

int main()
{
    unsigned long long num;

    cout << "Enter a number: ";
    cin >> num;

    isPrimeNumber(num) ? cout << num << " is a Prime Number" : cout << num << " is not a Prime Number";

    getch();
    return 0;
}

bool isPrimeNumber(unsigned long long num)
{
    if (num < 2) // If number is either 0 or 1
    {
        return false;
    }
    else if (num < 4 || num == 5 || num == 7) // Numbers less than 10 that are prime
    {
        return true;
    }
    else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) // All multiples of 2, 3, 5 and 7
    {
        return false;
    }
    return primeNumberIteration(num);
}

bool primeNumberIteration(unsigned long long num)
{
    for (size_t i = 11; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}