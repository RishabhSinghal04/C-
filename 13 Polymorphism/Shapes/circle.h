#pragma once

#include "oval.h"

class Circle : public Oval
{
public:
    Circle();
    Circle(const std::string &, const double &);
    ~Circle();

    const double get_radius() const;

    void set_radius(const double &);

    // void shape_description() const;
    virtual void shape_description() const override;
};