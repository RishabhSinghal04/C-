
#include <iostream>
#include <conio.h>
#include "circle.h"

int main()
{
    using namespace std;

    double radius;
    Circle circle1;

    cout << "Enter radius of a circle: ";
    cin >> radius;

    circle1.setRadius(radius);

    cout << fixed;
    cout << "Area is " << circle1.area() << '\n';
    cout << "Circumference is " << circle1.circumference() << '\n';

    getch();
    return 0;
}