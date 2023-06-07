
#include "square.h"

void Square::setSide(const float &side)
{
    this->side = side;
}

double Square::Perimeter()
{
    return 4.0 * side;
}

double Square::Area()
{
    return static_cast<double>(side * side);
}
