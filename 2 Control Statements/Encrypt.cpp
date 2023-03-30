/*
 * Write a program that will encrypt the data so that it may be transmitted more securely.
 * All the data is transmitted as four-digit integers.
 * Program should read a four-digit integer entered by the user and encrypt it as follows:-
 * Replace each digit with the result of adding 7 to the digit and getting remainder after dividing the new value by 10.
 * Then swap the first digit with third, and swap the second digit with fourth.
 * Then print the encrypted integer.
 */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    unsigned short digitCounter = 0;
    int num, sign = 1, temp, newNum = 0, encryptedNum;
    int left_part = 0, right_part = 0; // store left and right part of a number after splitting it

    cout << "Enter a four-digit integer: ";
    cin >> num;

    sign = (num > 0) ? 1 : -1;
    num = abs(num);

    if (static_cast<int>(log10(num)) + 1 == 4)
    {
        temp = num;
        while (temp > 0)
        {
            // Extract a digit -> Add 7 -> Mod 10 -> Multiply by place value -> Add resultant to newNum
            newNum += (temp % 10 + 7) % 10 * static_cast<int>(pow(10, digitCounter));
            temp /= 10;
            digitCounter++;
        }
        right_part = newNum % 100; // Extract right part
        left_part = newNum / 100;  // Extract left part
        encryptedNum = sign * (right_part * 100 + left_part);
        cout << "Integer in encrypted form is " << encryptedNum;
    }
    else
    {
        cout << "Not a four-digit integer";
    }

    getch();
    return 0;
}