
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int *ptrInteger = new int(23);

    cout << ptrInteger << '\n'
         << *ptrInteger;

    delete ptrInteger;
    ptrInteger = nullptr;

    getch();
    return 0;
}