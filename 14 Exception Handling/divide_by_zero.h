#pragma once

#include <iostream>
#include <exception>
#include <cstring>

class DivideByZeroException : public std::exception
{
public:
    DivideByZeroException(int a, int b) noexcept : std::exception(), m_a(a), m_b(b) {}

    virtual const char *what() const noexcept override
    {

        // Some compilers will give a warning that we're returning the address of a local string
        /* return std::string("Divide by zero detected , dividing ") +
               std::to_string(m_a) + std::string(" by ") + std::to_string(m_b); */

        return "divide by zero detected";
    }

    int get_a() const
    {
        return m_a;
    }

    int get_b() const
    {
        return m_b;
    }

private:
    int m_a{};
    int m_b{};
};

int divide(int a, int b)
{
    if (b == 0)
        throw DivideByZeroException(a, b);

    return a / b;
}