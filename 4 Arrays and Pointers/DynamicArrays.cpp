
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const unsigned short sizeOfArray = 10;
    int *arrayOfIntegers = new int[sizeOfArray]{}; // All values initailize to 0

    // Input Elements
    cout << "Enter " << sizeOfArray << " integers:-\n";
    for (auto index = 0; index < sizeOfArray; ++index)
    {
        cin >> arrayOfIntegers[index];
    }

    // Display Elements
    cout << sizeOfArray << " elements are:-\n";
    for (auto index = 0; index < sizeOfArray; ++index)
    {
        cout << arrayOfIntegers[index] << "  ";
    }

    // Add an extra element
    arrayOfIntegers[10] = 10.99;
    cout << arrayOfIntegers[10];

    // Release Memory
    delete[] arrayOfIntegers;
    arrayOfIntegers = nullptr;

    getch();
    return 0;
}