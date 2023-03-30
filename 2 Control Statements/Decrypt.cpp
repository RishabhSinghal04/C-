/*
 * Write a program that inputs an encrypted four digit integer and decrypts it (by reversing the encryption scheme) to form the original number.
 * [Refer Encrypt.cpp]
 */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    unsigned short digitCounter = 0, digit;
    int encryptedInteger, sign = 1, temp = 0, decryptedInteger = 0;
    int left_part = 0, right_part = 0; // store left and right part of a number after splitting it

    cout << "Enter an encrypted four-digit integer: ";
    cin >> encryptedInteger;

    sign = (encryptedInteger > 0) ? 1 : -1;
    encryptedInteger = abs(encryptedInteger);

    if (static_cast<int>(log10(encryptedInteger)) + 1 == 4)
    {
        // Process to swap digits
        right_part = encryptedInteger % 100; // Extract right part
        left_part = encryptedInteger / 100;  // Extract left part
        temp = right_part * 100 + left_part;

        // Process to decrypt an integer
        while (temp > 0)
        {
            digit = temp % 10; // Extract a digit
            if (digit < 7)
            {
                digit += 10; // Add 10 if digit is less than 7
            }
            digit -= 7; // Subtract 7 from extracted digit
            decryptedInteger += digit * static_cast<int>(pow(10, digitCounter));
            temp /= 10;
            digitCounter++;
        }
        decryptedInteger *= sign;
        cout << "Decrypted integer is " << decryptedInteger;
    }
    else
    {
        cout << "Not an encrypted four-digit integer";
    }

    getch();
    return 0;
}