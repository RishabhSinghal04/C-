
#include <iostream>
#include <conio.h>

#include "point.h"

int main()
{
    using namespace std;

    Point point1(1, 1);
    Point point2(2.9, 2.101);

    cout << fixed;
    cout << "Point 1 :-\n\t x = " << point1.getX() << "\t y = " << point1.getY() << '\n';
    cout << "Point 2 :-\n\t x = " << point2.getX() << "\t y = " << point2.getY() << '\n';

    getch();
    return 0;
}