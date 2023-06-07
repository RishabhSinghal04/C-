
#include "point.h"

// unsigned short Point::point_count{};

Point::Point()
    : Point(0.0, 0.0)
{
}

Point::Point(double x)
    : Point(x, 0.0)
{
}

Point::Point(double x, double y)
    : x{x}, y{y}
{
    //++Point::point_count;
}

// Setters
void Point::setX(const double &)
{
    this->x = x;
}

void Point::setY(const double &)
{
    this->y = y;
}

// Getters
const double &Point::getX() const
{
    return x;
}

const double &Point::getY() const
{
    return y;
}