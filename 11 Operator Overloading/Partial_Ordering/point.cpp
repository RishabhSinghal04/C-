
#include <cmath>
#include <compare>

#include "point.h"

Point::Point()
    : Point(0.0, 0.0)
{
}

Point::Point(double x, double y)
    : x{x}, y{y}
{
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double)
{
    this->y = y;
}

bool Point::operator==(const Point &point) const
{
    return distance_from_origin() == point.distance_from_origin();
}

std::partial_ordering Point::operator<=>(const Point &point) const
{
    return distance_from_origin() == point.distance_from_origin()
               ? std::partial_ordering::equivalent
           : distance_from_origin() > point.distance_from_origin()
               ? std::partial_ordering::greater
               : std::partial_ordering::less;
}

long double Point::distance_from_origin() const
{
    return sqrtl(powl(x, 2.0L) + powl(y, 2.0L));
}
