
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows, term = 0;
    const unsigned short width = 4;

    cout << "Enter number of rows: ";
    cin >> nRows;
    term = nRows * nRows + 1;

    for (int i = 1; i <= nRows; ++i)
    {
        for (int j = 1; j <= nRows + 1 - i; ++j)
        {
            cout << setw(width) << term++;
        }
        cout << '\n';
        term -= nRows * 2 - i * 2 + 1;
    }

    getch();
    return 0;
}