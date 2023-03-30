/*
  N    10*N    100*N   1000*N
  1    10      100     1000
  2    20      200     2000
  3    30      300     3000
  4    40      400     4000
 */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    const unsigned short N = 10;
    unsigned short nRows;

    cout << "Enter number of rows (1 to 7): ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i) // For row
    {
        for (int j = 1; j <= nRows; ++j) // For column
        {
            cout << i * static_cast<unsigned int>(pow(N, j - 1)) << '\t';
        }
        cout << '\n';
    }

    getch();
    return 0;
}