#pragma once

#include "number.h"
#include <memory>

class Point
{
    double x, y;
    // int *some_data{};
    std::unique_ptr<int> some_data{nullptr};

public:
    Point() = default;
    Point(double, double, int);
    Point(const Point &); // Copy Constructor
    Point(const Number &);
    // ~Point(); // Destructor

    // Getters
    double getX() const;
    double getY() const;
    std::unique_ptr<int> getSomeData() const;

    // Setters
    void setX(const double &);
    void setY(const double &);

    // Operator Overloading
    Point &operator=(const Point &);
    Point &operator=(const Number &);
};