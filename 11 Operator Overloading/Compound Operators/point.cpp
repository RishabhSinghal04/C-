
#include <cassert>

#include "point.h"

Point::Point()
    : Point(0.0, 0.0)
{
}

Point::Point(double x, double y)
    : x{x}, y{y}
{
}

Point Point::operator+(const Point &right) const
{
    return Point(x + right.x, y + right.y);
}

Point Point::operator-(const Point &right) const
{
    return Point(x - right.x, y - right.y);
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::setX(const double &x)
{
    this->x = x;
}

void Point::setY(const double &y)
{
    this->y = y;
}

Point &Point::operator+=(const Point &right)
{
    x += right.x;
    y += right.y;
    return *this;
}

Point &Point::operator-=(const Point &right)
{
    x -= right.x;
    y -= right.y;
    return *this;
}

double &Point::operator[](size_t index)
{
    assert(index == 0 || index == 1);
    return (index == 0) ? x : y;
}