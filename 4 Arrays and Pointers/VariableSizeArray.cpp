
#include <iostream>
#include <conio.h>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    uniform_int_distribution<int> dist(-9999, 9999);

    unsigned short sizeOfArray = 0;

    cout << "Enter number of elements: ";
    cin >> sizeOfArray;
    int arrayOfIntegers[sizeOfArray];

    for (auto index = 0; index < sizeOfArray; ++index)
    {
        arrayOfIntegers[index] = dist(rd);
    }

    cout << "Elements are:-\n";
    for (auto integer : arrayOfIntegers)
    {
        cout << integer << "  ";
    }

    getch();
    return 0;
}