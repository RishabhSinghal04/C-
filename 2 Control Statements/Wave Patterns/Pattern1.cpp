
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

    unsigned short WH = waveHeight - 1, x = WH;

    for (int i = 0; i < waveHeight; ++i)
    {
        for (int j = 0; j <= waveLength * WH * 2; ++j) // j = 0 for mod {0 to WH * 2 - 1}
        {
            (j % (WH * 2) == x || j % (WH * 2) == WH + i) ? cout << '*' : cout << ' ';
        }
        x--;
        cout << '\n';
    }

    getch();
    return 0;
}