
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows;

    cout << "Enter number of rows (from 1 to 13): ";
    cin >> nRows;

    if (nRows > 0 && nRows < 14)
    {
        for (int i = 1; i <= nRows; ++i)
        {
            for (int j = 1; j <= nRows; ++j)
            {
                cout << static_cast<unsigned char>(63 + i + j) << ' ';
            }
            cout << '\n';
        }
    }
    else
    {
        cout << "Number of rows must be from 1 to 13";
    }

    getch();
    return 0;
}