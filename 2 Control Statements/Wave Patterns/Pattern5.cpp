
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned short waveHeight, waveLength;

    cout << "Enter wave height: ";
    cin >> waveHeight;
    cout << "Enter wave length: ";
    cin >> waveLength;

    unsigned short x = waveHeight - 1;

    for (int i = 0; i < waveHeight; ++i)
    {
        for (int j = 0; j < waveLength * waveHeight * 2; ++j)
        {
            if (j % (waveHeight * 2) == x)
            {
                cout << '/';
            }
            else if (j % (waveHeight * 2) == waveHeight + i)
            {
                cout << '\\';
            }
            else
            {
                cout << ' ';
            }
        }
        x--;
        cout << '\n';
    }

    getch();
    return 0;
}