
#include <iostream>
#include <conio.h>

using namespace std;

int var = 10;

int main()
{
    int var = 5;

    cout << var << '\n'; // Value stored in the local variable

    cout << ::var << '\n'; // Value stored in the global variable

    getch();
    return 0;
}