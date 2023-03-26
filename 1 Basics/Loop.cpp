
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    for (size_t i; i < 10; ++i) // from 0 to 9 (both inclusive)
    {
        cout << setw(2) << i + 1 << ". Good\n";
    }

    getch();
    return 0;
}