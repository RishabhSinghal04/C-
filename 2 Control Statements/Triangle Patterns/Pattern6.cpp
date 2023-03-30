
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows, d1 = 0, d2 = 0, term_even = 0, term_odd = 0, x = 1, y = 0;
    const unsigned short width = 4;

    cout << "Enter number of rows: ";
    cin >> nRows;
    y = nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        term_even = x;      // Copy first term of every even row
        term_odd = y;       // Copy first term of every odd row
        d1 = nRows + 1 - i; // To decrease value of term_even
        d2 = d1 + 1;        // To decrease value of term_odd

        for (int j = 1; j <= i; ++j)
        {
            cout << setw(width);
            ((i + j) % 2 == 0) ? cout << term_even : cout << term_odd;
            term_even -= d1++;
            term_odd -= d2++;
        }
        cout << '\n';
        y += nRows - i;     // Set first term of even row
        x += nRows + 1 - i; // Set first term of odd row
    }

    getch();
    return 0;
}