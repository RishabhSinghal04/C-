
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

std::ostream &Point::operator<<(std::ostream &output_stream)
{
    std::cout << "\nMember Function\n";
    output_stream << "Point [ x : " << x << ", y : " << y << " ]\n";
    return output_stream;
}