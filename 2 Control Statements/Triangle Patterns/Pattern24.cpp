
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned short nRows;

    cout << "Enter number of rows (from 1 to 26): ";
    cin >> nRows;

    if (nRows > 0 && nRows < 27)
    {
        for (int i = 1; i <= nRows; ++i)
        {
            for (int j = 1; j <= nRows; ++j)
            {
                (j > nRows - i) ? cout << char(64 + i + j - nRows) << ' ' : cout << "  ";
            }
            cout << '\n';
        }
    }
    else
    {
        cout << "Number of rows must be from 1 to 26";
    }
    getch();
    return 0;
}