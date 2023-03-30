
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows;
    int term = 0, sum = 1;
    const unsigned short width = 4;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        term = sum;
        for (int j = 1; j <= nRows; ++j)
        {
            cout << setw(width);
            if (j > nRows - i)
            {
                cout << setw(width) << term;
                term -= j;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
        sum += nRows + 1 - i;
    }

    getch();
    return 0;
}