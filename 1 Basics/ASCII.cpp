// A program to print all ASCII characters

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    for (int i = 0; i < 256; ++i)
    {
        cout << setw(3) << i << ". " << char(i) << '\n';
    }

    getch();
    return 0;
}