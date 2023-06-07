
#include <iostream>
#include <conio.h>
#include <cmath>
#include "point.h"

double calculateDistance(const Point &point1, const Point &point2)
{
    return sqrt(pow(point1.getX() - point2.getX(), 2.0) + pow(point1.getY() - point2.getY(), 2.0));
}

int main()
{
    using namespace std;

    Point point1(1.0, 2.0);
    Point point2(2.0, 3.0);

    cout << fixed;
    cout << "Point 1 : " << point1.getX() << " , " << point1.getY() << '\n'
         << "Point 2 : " << point2.getX() << " , " << point2.getY() << '\n';
    cout << "Distance between the two points is " << calculateDistance(point1, point2) << '\n';
    
    //cout << Point::point_count;

    getch();
    return 0;
}