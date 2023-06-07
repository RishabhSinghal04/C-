#pragma once

class Circle
{
    double radius;
    static inline const double PI = 3.14159265358979323846;

public:
    Circle();
    Circle(double);

    void setRadius(double);
    double getRadius() const;

    double area() const;
    double circumference() const;
};