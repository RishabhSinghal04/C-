#pragma once

#include <iostream>
#include "point.h"

class Number
{
    int num_integer{};

public:
    Number() = default;
    Number(int);

    // Arithmetic operators
    Number operator+(const Number &right_operand);
    Number operator-(const Number &right_operand);
    Number operator*(const Number &right_operand);
    Number operator/(const Number &right_operand);
    Number operator%(const Number &right_operand);

    std::ostream &operator<<(std::ostream &);

    explicit operator double() const;
    explicit operator Point() const;

    // Getter
    int get_wrapped_int() const
    {
        return num_integer;
    }
};