
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    unsigned short nRows;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = -nRows + 1; i < nRows; ++i)
    {
        for (int j = 1; j <= 2 * nRows - 1; ++j)
        {
            (j > abs(i) && j + abs(i) < nRows * 2) ? cout << "* " : cout << "# ";
        }
        cout << '\n';
    }

    getch();
    return 0;
}