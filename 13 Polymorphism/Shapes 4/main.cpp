
#include <iostream>
#include <conio.h>

#include "circle.h"
#include "rectangle.h"

int main()
{
    using namespace std;

    // Shape * shape_ptr = new Shape; // Compiler error

    const Shape *shape_rect = new Rectangle(10, 10, "rect1");
    long double surface = shape_rect->surface();
    long double perimeter = shape_rect->perimeter();

    cout << "dynamic type of shape_rect : " << typeid(*shape_rect).name() << '\n';
    cout << "The surface of shape rect is : " << surface << '\n';
    cout << "The perimeter of shape rect is : " << perimeter << '\n';

    cout << "--------------" << '\n';

    const Shape *shape_circle = new Circle(10, "circle1");
    surface = shape_circle->surface();
    perimeter = shape_circle->perimeter();

    cout << "dynamic type of shape_circle : " << typeid(*shape_circle).name() << '\n';
    cout << "The surface of the circle is : " << surface << '\n';
    cout << "The perimeter of the circle is : " << perimeter << '\n';

    getch();
    return 0;
}