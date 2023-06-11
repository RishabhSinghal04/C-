
#include "circle.h"

Circle::Circle()
    : Circle("Circle", 0.0)
{
}

Circle::Circle(const std::string &description, const double &radius)
    : Oval(description, radius, radius)
{
}

Circle::~Circle()
{
    std::cout << "\n----Circle Destructor Called-----\n";
}

const double Circle::get_radius() const
{
    return get_major_axis_radius();
}

void Circle::set_radius(const double &radius)
{
    set_major_axis_radius(radius);
}

void Circle::shape_description() const
{
    std::cout << "Class : Circle \t Shape Description : " << Shape::get_description()
              << " \t Radius : " << get_major_axis_radius() << '\n';
}
