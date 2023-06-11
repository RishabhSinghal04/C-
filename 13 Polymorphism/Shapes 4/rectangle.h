#pragma once

#include "shape.h"

class Rectangle : public Shape
{
    double m_width = 0.0;
    double m_height = 0.0;

public:
    Rectangle() = default;
    Rectangle(double width, double height, std::string_view description);
    virtual ~Rectangle() = default;

    virtual long double perimeter() const override
    {
        return 2.0L * (static_cast<long double>(m_width) + m_height);
    }

    virtual long double surface() const override
    {
        return static_cast<long double>(m_width) * m_height;
    }
};
