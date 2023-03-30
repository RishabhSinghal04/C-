
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    const unsigned short width = 3;
    unsigned short nRows;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        for (int j = 1; j <= nRows; ++j)
        {
            cout << setw(width) << i + j - 1 << ' ';
        }
        cout << '\n';
    }

    getch();
    return 0;
}