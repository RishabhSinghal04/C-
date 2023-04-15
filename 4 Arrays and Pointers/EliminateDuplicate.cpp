/*
 * A program to remove duplicate elements from an array of integers.
 */

#include <iostream>
#include <conio.h>
#include <random>

using namespace std;

int main()
{
    bool isDuplicate = false;
    const unsigned short sizeOfArray = 10; // Define array size
    int arrayOfIntegers[sizeOfArray]{};    // Array declaration

    for (auto i = 0; i < sizeOfArray; ++i)
    {
        cout << "Enter a number: ";
        do
        {
            cin >> arrayOfIntegers[i];
            isDuplicate = false;

            for (auto j = 0; j < i; ++j)
            {
                if (arrayOfIntegers[i] == arrayOfIntegers[j]) // Duplicate element found
                {
                    cout << "Duplicate element found\nRe-Enter: ";
                    isDuplicate = true;
                    break;
                }
            }
        } while (isDuplicate); // Loop until the element is duplicate
    }

    for (size_t i = 0; i < sizeOfArray; ++i) // Display all array elements
    {
        cout << "Element at position " << i + 1 << " is " << arrayOfIntegers[i] << '\n';
    }

    getch();
    return 0;
}