
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows;
    const unsigned short width = 4;
    unsigned int term = 0;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        for (int j = 1; j <= nRows; ++j)
        {
            cout << setw(width);
            (j >= i) ? cout << ++term : cout << ' ';
        }
        cout << '\n';
        term--;
    }

    getch();
    return 0;
}