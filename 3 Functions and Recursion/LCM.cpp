/*
 * A program to calculate LCM of two numbers
 */

#include <iostream>
#include <conio.h>

using namespace std;

unsigned long long LCM(unsigned int, unsigned int);

int main()
{
    unsigned int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "LCM of " << num1 << " and " << num2 << " is " << LCM(num1, num2);

    getch();
    return 0;
}

unsigned long long LCM(unsigned int num1, unsigned int num2)
{
    unsigned int max_num = max(num1, num2), min_num = min(num1, num2);

    for (size_t i = max_num;; i += max_num)
    {
        if (i % min_num == 0)
        {
            return i;
        }
    }
}