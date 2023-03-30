/*
 * e = 1 + 1/1! + 1/2! + 1/3! + .....
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned short nTerms;
    unsigned long long factorial = 1;
    float eValue = 0.0F; // Mathematical constant e

    cout << "Enter number of terms: ";
    cin >> nTerms;

    if (nTerms > 0)
    {
        eValue = 1.0F;
        cout << "e = 1"; // Printing 1st term

        for (int i = 2; i <= nTerms; ++i) // For series terms
        {
            // Process to calculate factorial of denominator
            for (int j = 2; j <= i - 1; ++j)
            {
                factorial *= j;
            }

            eValue += 1.0F / static_cast<float>(factorial);
            cout << " + 1/" << (i - 1) << "!";
            factorial = 1;
        }
        cout << " = " << eValue;
    }

    getch();
    return 0;
}