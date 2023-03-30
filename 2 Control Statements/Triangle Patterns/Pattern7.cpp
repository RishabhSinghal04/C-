
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
    term = (nRows * (nRows + 1)) / 2; // Get the highest term of pattern

    for (int i = 1; i <= nRows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << setw(width) << term--;
        }
        cout << '\n';
    }

    getch();
    return 0;
}