#include <cmath>

#include "cube.h"

// Constructors
Cube::Cube()
    : Cube(0.0, "")
{
}

Cube::Cube(double side)
    : Cube(side, "")
{
}

Cube::Cube(double side, std::string color)
    : side{side}, color{color}
{
}

// Getters
double Cube::getSide() const
{
    return side;
}

std::string Cube::getColor() const
{
    return color;
}

// Setters
void Cube::setSide(double side)
{
    this->side = side;
}

void Cube::setColor(std::string color)
{
    this->color = color;
}

// Other Functions
long double Cube::volume() const
{
    return powl(side, 3.0L);
}