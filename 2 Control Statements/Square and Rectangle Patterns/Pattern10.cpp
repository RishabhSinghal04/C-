
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        for (int j = 1; j <= nRows; ++j)
        {
            (j % 2 == 1 || i % 2 == 0) ? cout << "0 " : cout << "1 ";
        }
        cout << '\n';
    }

    getch();
    return 0;
}