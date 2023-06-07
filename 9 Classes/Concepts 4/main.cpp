
#include <iostream>
#include <conio.h>
#include "point.h"

struct Component
{
    double x, y, z;
};

void displayComponent(const Component &c)
{
    std::cout << "x : " << c.x << '\n'
              << "y : " << c.y << '\n'
              << "z : " << c.z << '\n';
}

int main()
{
    using namespace std;

    Point p1(std::move(Point(40.7, 50.7)));

    cout << *(p1.getX()) << '\n'
         << *(p1.getY()) << '\n';

    Component c1{.x = 10.0, .y = 51.4, .z = 121.79};
    Component c2{.x = 12.9, .y = 11.54};
    Component c3{.z = 796.05};

    displayComponent(c1);
    displayComponent(c2);
    displayComponent(c3);

    getch();
    return 0;
}