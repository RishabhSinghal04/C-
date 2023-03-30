
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    unsigned short nRows;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = -nRows; i <= nRows; ++i)
    {
        if (i != 0)
        {
            for (int j = -nRows + 1; j < nRows; ++j)
            {
                if (j == 0 && abs(i) == nRows)
                {
                    cout << '*';
                }
                else if (abs(i + j) == nRows)
                {
                    cout << '/';
                }
                else if (abs(i) == nRows - abs(j))
                {
                    cout << '\\';
                }
                else
                {
                    cout << ' ';
                }
            }
            cout << '\n';
        }
        else
        {
            continue;
        }
    }

    getch();
    return 0;
}