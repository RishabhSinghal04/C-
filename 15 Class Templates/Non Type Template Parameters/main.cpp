
#include <iostream>
#include <conio.h>

#include "point.h"

int main()
{
    using namespace std;

    Point<int, 0> point1;

    cout << "Point 1 :-\n"
         << "\t x = " << point1.getX()
         << "\t y = " << point1.getY() << "\n\n";

    Point<float, 9.0F> point2(12.23, 49.710);

    cout << "Point 2 :-\n"
         << "\t x = " << point2.getX()
         << "\t y = " << point2.getY() << "\n\n";

    getch();
    return 0;
}