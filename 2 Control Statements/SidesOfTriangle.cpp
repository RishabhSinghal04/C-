/*
 * WAP that reads three nonzero values and determine and prints whether whether they could represent the sides of a triangle.
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float value1, value2, value3;

    cout << "Enter three nonzero values: ";
    cin >> value1 >> value2 >> value3;

    if (value1 <= 0 || value2 <= 0 || value3 <= 0)
    {
        cout << "Value is less than or equal to zero";
    }
    else
    {
        (value1 + value2 > value3 && value2 + value3 > value1 && value3 + value1 > value2) ? cout << "Represent the sides of a triangle" : cout << "Does not represent sides of a traingle";
    }
    
    getch();
    return 0;
}