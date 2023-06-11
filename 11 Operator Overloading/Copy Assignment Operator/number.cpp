#include "number.h"

Number::Number(int num_integer)
    : num_integer(num_integer)
{
}

int Number::getNumber() const
{
    return num_integer;
}

void Number::setNumber(const int &num_integer)
{
    this->num_integer = num_integer;
}