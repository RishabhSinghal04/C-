
#include <iostream>
#include <conio.h>

#include "point.h"

int main()
{
    using namespace std;

    Point point1(10, 20);
    Point point2(50.55, 100.110);

    cout << fixed;
    cout << "Point 1 :-\n\t x = " << point1.getX() << "\t y = " << point1.getY();
    cout << "Point 2 :-\n\t x = " << point2.getX() << "\t y = " << point2.getY();

    getch();
    return 0;
}