/*
 * * * *
  * * * *
 * * * *
  * * * *
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned short nRows;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows * 2; ++i) // For row
    {
        for (int j = 1; j <= nRows * 2; ++j) // For column
        {
            cout << "* ";
        }

        cout << '\n';
        if (i % 2 == 1) // If row is even in the next iteration
        {
            cout << " "; // Add one space
        }
    }

    getch();
    return 0;
}