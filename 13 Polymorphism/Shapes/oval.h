#pragma once

#include "shape.h"

class Oval : public Shape
{
    double major_axis_radius = 0.0, minor_axis_radius = 0.0;

public:
    Oval();
    Oval(const std::string &, const double &, const double &);
    ~Oval();

    const double get_major_axis_radius() const;
    const double get_minor_axis_radius() const;

    void set_major_axis_radius(const double &);
    void set_minor_axis_radius(const double &);

    // void shape_description() const;
    virtual void shape_description() const override;
};