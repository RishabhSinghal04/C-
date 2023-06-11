#pragma once

#include "oval.h"

class Circle : public Oval
{
public:
    Circle()
        : Circle("Circle", 0.0)
    {
    }

    Circle(const std::string &description, const double &radius)
        : Oval(description, radius, radius)
    {
    }

    const double get_radius() const
    {
        return get_major_axis_radius();
    }

    void set_radius(const double &radius)
    {
        set_major_axis_radius(radius);
    }

    virtual void shape_description() const override
    {
        std::cout << "Class : Circle \t Shape Description : " << Shape::get_description()
                  << " \t Radius : " << get_major_axis_radius() << '\n';
    }

    /* void Circle::shape_description(const std::string &color) const
    {
        std::cout << "Class : Circle \t Shape Color : " << color << '\n';
    } */
};