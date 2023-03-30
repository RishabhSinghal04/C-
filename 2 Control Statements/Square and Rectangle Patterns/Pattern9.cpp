
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
        for (int j = 1; j <= nRows; ++j)
        {
            cout << (i * j) % 2 << ' ';
        }
        cout << '\n';
    }

    getch();
    return 0;
}