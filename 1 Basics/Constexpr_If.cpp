
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const bool flag = true;

    if constexpr (flag)
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }

    if constexpr (const bool flag1 = false)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    getch();
    return 0;
}