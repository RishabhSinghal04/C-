
#include <iostream>
#include <conio.h>
#include "square.h"

int main()
{
    using namespace std;

    Square square;
    float squareSide = 0;

    cout << "Enter length of side of square: ";
    cin >> squareSide;

    square.setSide(squareSide);

    cout << fixed;
    cout << "The perimeter of square of side " << squareSide << " units is " << square.Perimeter() << " units\n";
    cout << "The perimeter of square of side " << squareSide << " units is " << square.Area() << " square units\n";

    getch();
    return 0;
}