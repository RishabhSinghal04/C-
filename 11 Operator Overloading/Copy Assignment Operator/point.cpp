
#include <iostream>

#include "point.h"

Point::Point(double x, double y, int some_data)
    : x{x}, y{y}, some_data{new int(some_data)}
{
}

Point::Point(const Point &point)
{
    std::cout << "\n_ _Copy constructor called for (" << point.x << ", " << point.y << ")\n";
    if (this != &point)
    {
        some_data = std::make_unique<int>(*point.some_data);
        x = point.x;
        y = point.y;
    }
}

Point::Point(const Number &right_operand)
{
    x = y = right_operand.getNumber();
}

/* Point::~Point()
{
    delete some_data;
} */

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

std::unique_ptr<int> Point::getSomeData() const
{
    return std::make_unique<int>(*some_data);
}

void Point::setX(const double &x)
{
    this->x = x;
}

void Point::setY(const double &y)
{
    this->y = y;
}

Point &Point::operator=(const Point &right_operand)
{
    std::cout << "\n_ _Copy assignment operator called _ _\n";
    if (this != &right_operand)
    {
        some_data = std::make_unique<int>(*right_operand.some_data);
        x = right_operand.x;
        y = right_operand.y;
    }
    return *this;
}

Point &Point::operator=(const Number &right_operand)
{
    x = y = right_operand.getNumber();
    return *this;
}