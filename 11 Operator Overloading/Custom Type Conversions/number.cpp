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

std::ostream &Number::operator<<(std::ostream &output_stream)
{
    output_stream << "Number : [" << num_integer << "]";
    return output_stream;
}

Number::operator double() const
{
    return (static_cast<double>(num_integer));
}

Number::operator Point() const
{
    std::cout << "Custom Conversion from Number to Point\n";
    return Point(static_cast<double>(num_integer), static_cast<double>(num_integer));
}