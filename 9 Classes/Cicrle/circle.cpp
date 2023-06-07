
#include "circle.h"

Circle::Circle()
    : Circle(0.0)
{
}

Circle::Circle(double radius)
    : radius{radius}
{
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::area() const
{
    return PI * radius * radius;
}

double Circle::circumference() const
{
    return 2.0 * PI * radius;
}