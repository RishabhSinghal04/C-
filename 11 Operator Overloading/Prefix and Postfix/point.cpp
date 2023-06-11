
#include <iostream>

#include "point.h"

Point::Point()
    : Point(0.0, 0.0)
{
}

Point::Point(double x, double y)
    : x{x}, y{y}
{
}

// Getters
double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

// Setters
void Point::setX(const double &x)
{
    this->x = x;
}

void Point::setY(const double &y)
{
    this->y = y;
}

// Operator Overloading
Point Point::operator+(const Point &right) const
{
    return Point(x + right.x, y + right.y);
}

Point Point::operator-(const Point &right) const
{
    return Point(x - right.x, y - right.y);
}

std::ostream &Point::operator<<(std::ostream &output_stream) const
{
    output_stream << " x : " << x << " , y : " << y;
    return output_stream;
}

void Point::operator++()
{
    ++x;
    ++y;
}

void Point::operator--()
{
    --x;
    --y;
}

Point Point::operator++(int)
{
    Point point(*this);
    ++(*this);
    return point;
}

Point Point::operator--(int)
{
    Point point(*this);
    --(*this);
    return point;
}
