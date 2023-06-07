
#include "point.h"

Point::Point(float x, float y)
    : x(new float(x)), y(new float(y))
{
}

Point::Point(const Point &point)
    : Point(*(point.getX()), *(point.getY()))
{
}

Point::Point(Point &&point)
    : x{point.getX()}, y{point.getY()}
{
    point.invalidate();
}

Point::~Point()
{
    delete x, y;
}

void Point::setX(float x)
{
    *(this->x) = x;
}

void Point::setY(float y)
{
    *(this->y) = y;
}

float *Point::getX() const
{
    return x;
}

float *Point::getY() const
{
    return y;
}