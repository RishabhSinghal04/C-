
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows;
    const unsigned short width = 4;
    int term = 0, sum = 0;

    cout << "Enter number of rows: ";
    cin >> nRows;
    sum = nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        term = sum;
        for (int j = 1; j <= nRows; ++j)
        {
            cout << setw(width);
            if (j > nRows - i)
            {
                cout << setw(width) << term;
                term -= j + 1;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
        sum += nRows - i;
    }

    getch();
    return 0;
}