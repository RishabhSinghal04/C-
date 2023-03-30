
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    const unsigned short width = 4;
    unsigned short nRows, oddColumnTerms = 0, evenColumnTerms = 0;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        oddColumnTerms = nRows - i + 1;
        evenColumnTerms = nRows - i + 1;

        for (int j = 1; j <= nRows; ++j)
        {
            cout << setw(3);
            (j % 2 == 1) ? cout << oddColumnTerms : cout << evenColumnTerms;
            oddColumnTerms += nRows;
            evenColumnTerms += nRows;
        }
        cout << '\n';
    }

    getch();
    return 0;
}