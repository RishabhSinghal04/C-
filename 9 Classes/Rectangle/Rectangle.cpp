
#include "rectangle.h"

Rectangle::Rectangle()
{
    length = 0.0F;
    breadth = 0.0F;
}

Rectangle::Rectangle(const float &l, const float &b)
{
    length = l;
    breadth = b;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getBreadth()
{
    return breadth;
}

double Rectangle::perimeter()
{
    return 2.0 * (length + breadth);
}

double Rectangle::area()
{
    return length * breadth;
}