
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const unsigned short sizeOfArray = 5; // Define size of array
    int arrayOfIntegers[sizeOfArray]{};   // Declare an array of integers of size = sizeOfArray, initialized with 0

    // Input elements in array
    for (size_t i = 0; i < sizeOfArray; ++i)
    {
        cout << "Enter a number: ";
        cin >> arrayOfIntegers[i];
    }

    // Display array elements
    for (auto i : arrayOfIntegers)
    {
        cout << i << '\n';
    }

    int arr[]{409, 2, 102, 4, 45, 6, 25, 7, 9, 12};
    cout << "\nSize of arr[] is " << size(arr);

    cout << "\n{";
    for (auto i : arr)
    {
        cout << ' ' << i << ' ';
    }
    cout << '}';

    getch();
    return 0;
}