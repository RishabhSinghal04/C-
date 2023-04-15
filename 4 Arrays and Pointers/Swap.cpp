
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const unsigned short sizeOfArray = 5;
    int arrayOfIntegers[sizeOfArray]{}, arrayOfIntegers2[sizeOfArray]{};

    // Input Elements
    cout << "Enter " << sizeOfArray << " integers:-\n";
    for (size_t index = 0; index < sizeOfArray; ++index)
    {
        cin >> arrayOfIntegers[index];
    }

    cout << "Enter " << sizeOfArray << " integers:-\n";
    for (size_t index = 0; index < sizeOfArray; ++index)
    {
        cin >> arrayOfIntegers2[index];
    }

    // Print Elements
    cout << "Elements of 1st array:-\n";
    for (auto integer : arrayOfIntegers)
    {
        cout << integer << '\n';
    }

    cout << "Elements of 2nd array:-\n";
    for (auto integer : arrayOfIntegers2)
    {
        cout << integer << '\n';
    }

    // Swapping
    for (size_t index = 0; index < sizeOfArray; ++index)
    {
        int temp = arrayOfIntegers[index];
        arrayOfIntegers[index] = arrayOfIntegers2[index];
        arrayOfIntegers2[index] = temp;
    }

    // Print Elements (after swapping)
    cout << "Elements of 1st array:-\n";
    for (auto integer : arrayOfIntegers)
    {
        cout << integer << '\n';
    }

    cout << "Elements of 2nd array:-\n";
    for (auto integer : arrayOfIntegers2)
    {
        cout << integer << '\n';
    }

    getch();
    return 0;
}