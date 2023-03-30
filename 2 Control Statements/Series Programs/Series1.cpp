/*
 * e^x = 1 + x/1! + (x^2)/2! + (x^3)/3! + .....
 */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    short x;
    unsigned short nTerms;
    unsigned long long factorial = 1;
    float eValue = 0.0F; // Mathematical constant e

    cout << "Enter number of terms: ";
    cin >> nTerms;

    if (nTerms > 0)
    {
        cout << "Enter value of 'x': ";
        cin >> x;
        
        eValue = 1.0F;
        cout << "e^x = 1"; // Printing 1st term

        for (int i = 2; i <= nTerms; ++i) // For series terms
        {
            // Process to calculate factorial of denominator
            for (int j = 2; j <= i - 1; ++j)
            {
                factorial *= j;
            }

            eValue += powf(x, i - 1) / static_cast<float>(factorial);
            cout << " + (" << x << "^" << i - 1 << ")/" << (i - 1) << "!";
            factorial = 1;
        }
        cout << " = " << eValue;
    }

    getch();
    return 0;
}