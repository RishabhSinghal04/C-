// A program to convert binary number into its decimal equivalent

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    bool isBinaryNumber = true;
    unsigned short binaryDigit, binaryDigitCounter = 0;
    unsigned int decimalNumber = 0;
    unsigned long long binaryNumber, temp;

    cout << "Enter a number in binary format: ";
    cin >> binaryNumber;
    temp = binaryNumber;

    while (temp > 0)
    {
        binaryDigit = temp % 10;
        if (binaryDigit == 1 || binaryDigit == 0)
        {
            decimalNumber += binaryDigit * static_cast<unsigned int>(pow(2, binaryDigitCounter));
            binaryDigitCounter++;
            temp /= 10;
        }
        else
        {
            isBinaryNumber = false;
            break;
        }
    }

    isBinaryNumber ? cout << "Decimal equivalent of " << binaryNumber << " is " << decimalNumber : cout << "Not a Binary Number";

    getch();
    return 0;
}