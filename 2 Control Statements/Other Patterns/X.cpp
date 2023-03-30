
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned short nRows;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = -nRows + 1; i < nRows; ++i)
    {
        for (int j = -nRows + 1; j < nRows; ++j)
        {
            (i == j || i + j == 0) ? cout << '*' : cout << ' ';
        }
        cout << '\n';
    }

    getch();
    return 0;
}