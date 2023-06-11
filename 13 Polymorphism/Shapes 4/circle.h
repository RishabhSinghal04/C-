#pragma once

#include "shape.h"

class Circle : public Shape
{
    double m_radius = 0.0;
    inline static double PI = 3.14159265;

public:
    Circle() = default;
    Circle(double radius, std::string_view description);
    virtual ~Circle() = default;

    virtual long double perimeter() const
    {
        return (2.0L * PI * m_radius);
    }

    virtual long double surface() const
    {
        return static_cast<long double>(PI) * m_radius * m_radius;
    }
};
