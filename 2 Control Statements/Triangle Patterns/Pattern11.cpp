
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows;
    const unsigned short width = 7;
    unsigned int firstTerm = 0, secondTerm = 1, resultantTerm = firstTerm + secondTerm;

    cout << "Enter number of rows (from 1 to 7): ";
    cin >> nRows;
    
    if (nRows > 0 && nRows < 8)
    {
        for (int i = 1; i <= nRows; ++i)
        {
            for (int j = 1; j <= i; ++j)
            {
                cout << setw(width) << resultantTerm;
                resultantTerm = firstTerm + secondTerm;
                firstTerm = secondTerm;
                secondTerm = resultantTerm;
            }
            cout << '\n';
        }
    }
    else
    {
        cout << "Number of rows must be from 1 to 7";
    }

    getch();
    return 0;
}