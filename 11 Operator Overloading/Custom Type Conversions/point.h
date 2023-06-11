#pragma once

#include <iostream>

class Point
{
    double x, y;

public:
    Point();
    Point(double, double);

    Point operator+(const Point &right) const;
    Point operator-(const Point &right) const;

    // Getters
    double getX() const;
    double getY() const;

    // Setters
    void setX(const double &);
    void setY(const double &);

    // Operator Overloading
    std::ostream &operator<<(std::ostream &) const;
    double &operator[](size_t index);
};