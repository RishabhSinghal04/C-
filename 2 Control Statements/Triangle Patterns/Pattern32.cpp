
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows;
    const unsigned short width = 7;
    int sum = 1;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        for (int j = 1; j < nRows + i; ++j)
        {
            cout << setw(width);
            // Print terms of triangle pattern
            if (j > nRows - i)
            {
                if (j == nRows) // Print centre terms
                {
                    (i > 1) ? cout << (sum + 1) * ((i - 1) * 2) : cout << '1';
                }
                else // Print left and right terms
                {
                    sum += 2;
                    cout << sum;
                }
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }

    getch();
    return 0;
}