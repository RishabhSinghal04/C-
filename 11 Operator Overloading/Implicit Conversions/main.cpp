
#include <iostream>
#include <conio.h>
#include "number.h"

double sum(double a, double b)
{
    return a + b;
}

int main()
{
    using namespace std;

    Number n1(22);
    Number n2(10);

    Number a = n1 - 1;
    // Number b = 1 - n1; // Compiler Error

    cout << a.getNumber() << '\n'
         << n1.getNumber() - 1 << '\n'
         << 1 - n2.getNumber() << '\n';

    getch();
    return 0;
}