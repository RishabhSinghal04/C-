
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows;
    const unsigned short width = 7;
    unsigned int firstTerm = 0, secondTerm = 1, resultantTerm = 0;

    cout << "Enter number of rows (from 1 to 24): ";
    cin >> nRows;

    if (nRows > 0 && nRows < 25)
    {
        for (int i = 1; i <= nRows; ++i)
        {
            for (int j = 1; j <= i; ++j)
            {
                cout << setw(width) << resultantTerm;
                firstTerm = secondTerm;
                secondTerm = resultantTerm;
                resultantTerm = firstTerm + secondTerm;
            }
            cout << '\n';
            secondTerm = 1;
            firstTerm = resultantTerm = 0;
        }
    }
    else
    {
        cout << "Number of rows must be from 1 to 24";
    }

    getch();
    return 0;
}