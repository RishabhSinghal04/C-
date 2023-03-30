
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
        for (int j = 1; j <= 3 * nRows + i - 2; ++j)
        {
            (j <= nRows - i || (j >= nRows + i && j < 3 * nRows - i)) ? cout << ' ' : cout << '*';
        }
        cout << '\n';
    }

    getch();
    return 0;
}