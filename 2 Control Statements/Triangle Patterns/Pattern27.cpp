
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
        for (int j = 1; j < nRows + i; ++j)
        {
            (j > nRows - i) ? cout << "*" : cout << ' ';
        }
        cout << '\n';
    }

    getch();
    return 0;
}