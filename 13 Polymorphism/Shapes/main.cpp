
// #include <iostream>
#include <conio.h>
#include <memory>

#include "shape.h"
#include "oval.h"
#include "circle.h"

void shapeDescription(const Shape &);

void fun_des()
{
    std::cout << "In fun_des:-\n";
    Shape *_shapes = new Circle("_Circle_", 79.00);
    delete _shapes;
    std::cout << "End of fun_des\n";
}

int main()
{
    using namespace std;

    constexpr uint16_t LINE_SEPARATOR = 110;

    Shape shape1("shape 1");
    Oval oval1("oval 1", 10.42, 7.89);
    Circle circle1("circle 1", 4.94);

    cout << "\t I N F O R A M T I O N\n";

    cout << "Shape : " << shape1.get_description() << "\n\n";

    cout << "Oval : " << oval1.get_description()
         << "\t Major Axis Radius : " << oval1.get_major_axis_radius()
         << "\t Minor Axis Radius : " << oval1.get_minor_axis_radius() << "\n\n";

    cout << "Circle : " << circle1.get_description()
         << "\t Radius : " << circle1.get_radius() << '\n';

    // Stroing base class pointers in array
    cout << string(LINE_SEPARATOR, '-') << "\nStroing base class pointers in array:-\n\n";

    Shape *shape_collection[]{&shape1, &oval1, &circle1};

    for (Shape *shape : shape_collection)
    {
        cout << "Size of *shape is " << sizeof(*shape) << '\n';
        shape->shape_description();
    }

    // Binding with base class reference
    cout << string(LINE_SEPARATOR, '-') << "\nBinding with base class reference:-\n\n";

    Shape &shape_1 = shape1;
    Shape &shape_2 = oval1;
    Shape &shape_3 = circle1;

    shapeDescription(shape_1);
    shapeDescription(circle1);
    shapeDescription(oval1);
    shapeDescription(shape_2);

    // Object sliced off
    cout << string(LINE_SEPARATOR, '-') << "\nObject sliced off:-\n\n";

    Shape shape2 = circle1;
    cout << "Shape : " << shape2.get_description() << '\n';

    // Size of Polymorphic Objects
    cout << string(LINE_SEPARATOR, '-') << "\nSize of Polymorphic Objects:-\n\n";

    cout << "sizeof \"shape1\" : " << sizeof(shape1) << '\n';
    cout << "sizeof \"shape2\" : " << sizeof(shape2) << '\n';
    cout << "sizeof \"oval1\" : " << sizeof(oval1) << '\n';
    cout << "sizeof \"circle1\" : " << sizeof(circle1) << '\n';

    // Objects sliced off
    cout << string(LINE_SEPARATOR, '-') << "\nObjects sliced off:-\n\n";

    Shape shape_collection2[]{circle1, oval1, shape1};

    for (auto shape : shape_collection2)
    {
        cout << "size of shape : " << sizeof(shape) << '\n';
        Shape &shape_ref = shape;
        shape_ref.shape_description();
    }

    // Storing in smart pointers
    cout << string(LINE_SEPARATOR, '-') << "\nStoring in smart pointers:-\n\n";

    shared_ptr<Shape> shapes[]{make_shared<Circle>("circle 2", 12.2), make_shared<Oval>("oval 2", 10.0, 20.0)};

    for (auto &shape : shapes)
    {
        shape->shape_description();
    }

    fun_des();
    
    getch();
    return 0;
}

void shapeDescription(const Shape &shape)
{
    shape.shape_description();
}