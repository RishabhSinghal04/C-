#include <iostream>
#include <conio.h>
#include "rectangle.h"

int main()
{
    using namespace std;

    float length = 0.0F, breadth = 0.0F;

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    Rectangle rectangle(length, breadth);

    cout << fixed;
    cout << "The perimeter of rectangle is " << rectangle.perimeter() << " units\n";
    cout << "The area of rectangle is " << rectangle.area() << " square units\n";

    getch();
    return 0;
}