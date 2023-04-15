// Run it with ./Main.exe

#include <iostream>
#include <conio.h>

using namespace std;

int main(int argv, char **argc)
{
    cout << "Number of arguments = " << argv << '\n';

    cout << argc[0];
    for (size_t i = 1; i < argv; ++i)
    {
        cout << ", " << argc[i];
    }

    getch();
    return 0;
}