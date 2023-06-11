
// #include <iostream>
#include <conio.h>

#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{
    using namespace std;

    Shape shape1("Shape 1");
    Oval oval1("Oval 1", 10.94, 11.77);
    Circle circle1("Circle 1", 21.54);

    circle1.shape_description();
    oval1.shape_description("blue", 11);

    Shape &shape_ref1 = circle1;
    shape_ref1.shape_description("Green");

    Shape shape2 = circle1;
    shape2.shape_description("red");

    getch();
    return 0;
}