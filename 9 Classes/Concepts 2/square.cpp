
#include "square.h"

Square::Square()
{
    side = 0.0F;
    color = "";
    shading = 0;
    position = 0.0F;
}

Square::Square(const float &side)
    : Square(side, "red", 4, 0.0)
{
}

Square::Square(const float &side, const std::string &color, const uint16_t &shading, const float &position)
    : side{side}, color{color}, shading{shading}, position{position}
{
}

void Square::setSide(const float &side)
{
    this->side = side;
}

float Square::getSide() const
{
    return side;
}

float Square::area() const
{
    return side * side;
}