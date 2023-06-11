#pragma once

#include "shape.h"

class Oval : public Shape
{
    double major_axis_radius = 0.0, minor_axis_radius = 0.0;

public:
    Oval()
        : Oval("Oval", 0.0, 0.0)
    {
    }

    Oval(const std::string &description, const double &major_axis_radius, const double &minor_axis_radius)
        : Shape(description),
          major_axis_radius{major_axis_radius},
          minor_axis_radius{minor_axis_radius}
    {
    }

    // __Getters__
    const double get_major_axis_radius() const
    {
        return major_axis_radius;
    }

    const double get_minor_axis_radius() const
    {
        return minor_axis_radius;
    }

    // __Setters__
    void set_major_axis_radius(const double &major_axis_radius)
    {
        this->major_axis_radius = major_axis_radius;
    }

    void set_minor_axis_radius(const double &minor_axis_radius)
    {
        this->minor_axis_radius = minor_axis_radius;
    }

    // Other Functions
    virtual void shape_description() const override
    {
        std::cout << "Class : Oval \t Shape Description : " << Shape::get_description()
                  << " \t Major Axis Radius : " << major_axis_radius
                  << " \t Minor Axis Radius : " << minor_axis_radius << '\n';
    }

    virtual void shape_description(const std::string &color, const uint16_t color_depth) const
    {
        std::cout << "Class : Oval \t Shape Color : " << color
                  << " \t Color Depth : " << color_depth << '\n';
    }
};