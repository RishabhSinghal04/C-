/*
 * Basics of Multidimensional Arrays
 */

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    const unsigned short nRows = 2, nColumns = 4;                         // Total number of rows and columns
    int arrayOfIntegers[nRows][nColumns]{{1, 2, 3, 4}, {11, 12, 13, 14}}; // A multidimensional array

    cout << "Size of arrayOfIntegers[][] is " << sizeof(arrayOfIntegers) << '\n';
    cout << "Size of arrayOfIntegers[][] (using 'size()') is " << size(arrayOfIntegers) << '\n';

    for (size_t i = 0; i < nRows; ++i) // Display array elements
    {
        for (size_t j = 0; j < nColumns; ++j)
        {
            cout << setw(4) << arrayOfIntegers[i][j];
        }
        cout << '\n';
    }
    // Array of characters
    const unsigned short wordLength = 58, sentenceLength = 200;
    char word[][wordLength]{"Good", "Better", "Best"};
    char sentences[][sentenceLength]{
        "Legs are tied, these hands are broken",
        "Alone I try with words unspoken",
        "Silent cry, my breath is frozen",
        "With blinded eyes I fear myself",
        "",
        "It's burning down, its burning high",
        "When ashes fall, the legends rise",
        "We burned it out a mile wide",
        "When ashes fall the legends rise"};

    for (size_t i = 0; i < size(word); ++i)
    {
        for (size_t j = 0; j < wordLength; ++j)
        {
            cout << word[i][j];
        }
        cout << '\n';
    }
    for (size_t i = 0; i < size(sentences); ++i)
    {
        for (size_t j = 0; j < sentenceLength; ++j)
        {
            cout << sentences[i][j];
        }
        cout << '\n';
    }

    getch();
    return 0;
}