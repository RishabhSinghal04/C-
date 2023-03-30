
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows;
    const unsigned short width = 4;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        for (int j = 1; j <= 2 * nRows - 1; ++j)
        {
            cout << setw(width);
            if (j <= nRows - i)
            {
                cout << j;
            }
            else if (j >= nRows + i)
            {
                cout << 2 * nRows - j;
            }
            else
            {
                cout << '*';
            }
        }
        cout << '\n';
    }

    getch();
    return 0;
}