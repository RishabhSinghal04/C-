
#include <iostream>
#include <conio.h>

#include "point.h"

int main()
{
    using namespace std;

    Point point1(1, 2);
    Point point2;

    point2.setX(4);
    point2.setY(5);

    Point sum_points(point1 + point2);
    Point sub_points(point1 - point2);

    cout << point1.getX() << " + " << point2.getX() << " = " << sum_points.getX() << '\n'
         << point1.getY() << " + " << point2.getY() << " = " << sum_points.getY() << '\n';
    cout << point1.getX() << " - " << point2.getX() << " = " << sub_points.getX() << '\n'
         << point1.getY() << " - " << point2.getY() << " = " << sub_points.getY() << '\n';

    cout << "Point 1 :-\nx : " << point1[0] << "\ny : " << point1[1] << '\n';
    cout << "Point 2 :-\nx : " << point2[0] << "\ny : " << point2[1] << '\n';

    point1[0] = 10;
    point2[1] = 10;
    cout << "After modification:-\n";
    cout << "Point 1 :-\nx : " << point1[0] << "\ny : " << point1[1] << '\n';
    cout << "Point 2 :-\nx : " << point2[0] << "\ny : " << point2[1] << '\n';

    getch();
    return 0;
}