
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const unsigned short sizeOfArray = 19;
    int arrayOfIntegers[]{11, 12, 13, 14, 15, 16, 17, 18, 19, 0, -1, -2, -3, -4, -5, -6, -7, -8, -9};

    // Navigation
    int *ptrArrayOfIntegers = arrayOfIntegers;
    /* for (int index = 0; index < sizeOfArray; ++index)
    {
        cout << *ptrArrayOfIntegers << '\n';
        ptrArrayOfIntegers++;
    }
    OR
    for (int index = 0; index < sizeOfArray; ++index)
    {
        cout << *(ptrArrayOfIntegers + index) << '\n';
    } */

    for (int index = 0; index < sizeOfArray; ++index)
    {
        cout << *(arrayOfIntegers + index) << "  ";
    }

    ptrArrayOfIntegers = &arrayOfIntegers[sizeOfArray - 1];
    cout << "\nIn reverse order:-\n";
    for (int index = sizeOfArray; index > 0; --index)
    {
        cout << *ptrArrayOfIntegers-- << "  ";
    }

    // Difference
    int *pointer1 = &arrayOfIntegers[0], *pointer2 = &arrayOfIntegers[sizeOfArray - 1];
    ptrdiff_t posDiff = *pointer1 - *pointer2, negDiff = *pointer2 - *pointer1;

    cout << "\npointer1 : " << *pointer1 << "\nPointer2 : " << *pointer2;
    cout << "\npointer1 - pointer2 = " << *pointer1 - *pointer2 << "\npointer2 - pointer1 = " << *pointer2 - *pointer1;
    cout << "\nPositive : " << posDiff << "\nNegative : " << negDiff;
    cout << "\nSize of ptrdiff_t : " << sizeof(ptrdiff_t);

    // Comparision
    cout << boolalpha;
    cout << "\npointer1 > pointer2 : " << (*pointer1 > *pointer2);
    cout << "\npointer1 < pointer2 : " << (*pointer1 < *pointer2);
    cout << "\npointer1 >= pointer2 : " << (*pointer1 >= *pointer2);
    cout << "\npointer1 <= pointer2 : " << (*pointer1 <= *pointer2);
    cout << "\npointer1 == pointer2 : " << (*pointer1 == *pointer2);
    cout << "\npointer1 != pointer2 : " << (*pointer1 != *pointer2);

    getch();
    return 0;
}