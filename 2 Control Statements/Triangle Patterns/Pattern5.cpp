
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows, term = 0;
    const unsigned short width = 4;
    unsigned int sum = 1;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        term = sum;
        for (int j = 1; j <= i; ++j)
        {
            cout << setw(width) << term;
            term -= nRows + j - i;
        }
        cout << '\n';
        sum += nRows - i + 1;
    }

    getch();
    return 0;
}