#include "number.h"

Number::Number(int num_integer)
    : num_integer(num_integer)
{
}

Number Number::operator+(const Number &right_operand)
{
    return Number(num_integer + right_operand.num_integer);
}

Number Number::operator-(const Number &right_operand)
{
    return Number(num_integer - right_operand.num_integer);
}

Number Number::operator*(const Number &right_operand)
{
    return Number(num_integer * right_operand.num_integer);
}

Number Number::operator/(const Number &right_operand)
{
    return Number(num_integer / right_operand.num_integer);
}

Number Number::operator%(const Number &right_operand)
{
    return Number(num_integer % right_operand.num_integer);
}

int Number::getNumber() const
{
    return num_integer;
}

void Number::setNumber(int num_integer)
{
    this->num_integer = num_integer;
}

/* Number::operator double() const
{
    return (static_cast<double>(num_integer));
} */