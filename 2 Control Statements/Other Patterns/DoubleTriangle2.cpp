
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned short nRows;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        for (int j = 1; j <= 2 * nRows; ++j)
        {
            if (j <= nRows - i)
            {
                cout << ' ';
            }
            else if (j > nRows && j <= 2 * nRows - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << '\n';
    }

    getch();
    return 0;
}