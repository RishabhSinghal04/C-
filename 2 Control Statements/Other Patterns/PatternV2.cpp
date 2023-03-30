
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    unsigned short nRows;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        for (int j = -nRows + 1; j < nRows; ++j)
        {
            (abs(j) == i - 1) ? cout << '*' : cout << ' ';
        }
        cout << '\n';
    }

    getch();
    return 0;
}