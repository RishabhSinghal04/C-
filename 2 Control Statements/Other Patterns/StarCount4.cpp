
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned short nRows;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows + 1; ++i)
    {
        for (int j = 1; j <= nRows + 1; ++j)
        {
            (j > nRows - i + 1) ? ((j <= nRows) ? cout << "*" : cout << i - 1) : cout << ' ';
        }
        cout << '\n';
    }

    getch();
    return 0;
}