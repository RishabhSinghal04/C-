
#include "cuboid.h"

Cuboid::Cuboid()
    : Cuboid(0.0, 0.0, 0.0)
{
}

Cuboid::Cuboid(double length, double breadth, double height)
    : length{length}, breadth{breadth}, height{height}
{
}

// Getters
double Cuboid::getLength() const
{
    return length;
}

double Cuboid::getBreadth() const
{
    return breadth;
}

double Cuboid::getHeight() const
{
    return height;
}

// Setters
void Cuboid::setLength(double length)
{
    this->length = length;
}

void Cuboid::setBreadth(double breadth)
{
    this->breadth = breadth;
}

void Cuboid::setHeight(double height)
{
    this->height = height;
}

// Operator Overloading
/* bool Cuboid::operator==(const Cuboid &cuboid) const
{
    return (length == cuboid.length && breadth == cuboid.breadth && height == cuboid.height)
               ? true
               : false;
} */

std::partial_ordering Cuboid::operator<=>(const Cuboid &cuboid) const
{
    if (volume() > cuboid.volume())
    {
        return std::partial_ordering::greater;
    }
    else if (volume() < cuboid.volume())
    {
        return std::partial_ordering::less;
    }
    else if (volume() == cuboid.volume())
    {
        return std::partial_ordering::equivalent;
    }
    else
    {
        return std::partial_ordering::unordered;
    }
}

// Other Functions
long double Cuboid::volume() const
{
    return static_cast<long double>(length) * breadth * height;
}
