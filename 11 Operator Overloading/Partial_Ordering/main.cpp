
#include <iostream>
#include <conio.h>

#include "point.h"

int main()
{
    using namespace std;

    Point point1(1, 1);
    Point point2(2, 4);

    cout << "Point 1 :\t x = " << point1.getX() << "  y = " << point1.getY() << '\n';
    cout << "Point 2 :\t x = " << point2.getX() << "  y = " << point2.getY() << '\n';

    cout << boolalpha;
    cout << "Point 1 == Point 2 : " << (point1 == point2) << '\n';
    cout << "Point 1 != Point 2 : " << (point1 != point2) << '\n';
    cout << "Point 1 >= Point 2 : " << (point1 >= point2) << '\n';
    cout << "Point 1 <= Point 2 : " << (point1 <= point2) << '\n';
    cout << "Point 1 > Point 2 : " << (point1 > point2) << '\n';
    cout << "Point 1 < Point 2 : " << (point1 < point2) << '\n';

    getch();
    return 0;
}