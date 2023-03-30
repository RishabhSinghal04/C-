
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows, columnTerm = 0;

    cout << "Enter number of rows (from 1 to 5): ";
    cin >> nRows;

    if (nRows > 0 && nRows < 6)
    {
        for (int i = 1; i <= nRows; ++i)
        {
            for (int j = 1; j <= nRows; ++j)
            {
                cout << static_cast<unsigned char>(nRows * j + 65 - i) << ' ';
            }
            cout << '\n';
        }
    }
    else
    {
        cout << "Number of rows must be from 1 to 5";
    }

    getch();
    return 0;
}