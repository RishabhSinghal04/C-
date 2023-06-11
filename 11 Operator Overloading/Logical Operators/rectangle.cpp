
#include "rectangle.h"

Rectangle::Rectangle()
    : Rectangle(0.0, 0.0)
{
}

Rectangle::Rectangle(double length)
    : Rectangle(length, 0.0)
{
}

Rectangle::Rectangle(double length, double breadth)
    : length{length}, breadth{breadth}
{
}

// Setters
void Rectangle::setLength(double length)
{
    this->length = length;
}

void Rectangle::setBreadth(double breadth)
{
    this->breadth = breadth;
}

// Operator Overloading (Logical Operators)
bool Rectangle::operator==(const Rectangle &rectangle) const
{
    // return (length == rectangle.length && breadth == rectangle.breadth) ? true : false;
    return (this->area()) == rectangle.area();
}

bool Rectangle::operator<(const Rectangle &rectangle) const
{
    return this->area() < rectangle.area();
}

// Other Functions
long double Rectangle::area() const
{
    return static_cast<long double>(length) * breadth;
}

long double Rectangle::perimeter() const
{
    return 2.0L * (static_cast<long double>(length) + breadth);
}

// Getters
double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getBreadth() const
{
    return breadth;
}
