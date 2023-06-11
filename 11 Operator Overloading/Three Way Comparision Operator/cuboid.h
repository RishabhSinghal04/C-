#pragma once

#include <compare>

#include "integer.h"

class Cuboid
{
    double length, breadth, height;
    Integer num_int;

public:
    Cuboid();
    Cuboid(double, double, double);

    double getLength() const;
    double getBreadth() const;
    double getHeight() const;

    void setLength(double);
    void setBreadth(double);
    void setHeight(double);

    bool operator==(const Cuboid &) const = default;
    // bool operator==(const Cuboid &) const;
    // std::partial_ordering operator<=>(const Cuboid &cuboid) const = default;
    std::partial_ordering operator<=>(const Cuboid &) const;

    long double volume() const;
};