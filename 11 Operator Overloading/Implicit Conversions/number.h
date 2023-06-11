#pragma once

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

    // operator double() const;

    // Getter
    int getNumber() const;

    // Setter
    void setNumber(int num_integer);
};