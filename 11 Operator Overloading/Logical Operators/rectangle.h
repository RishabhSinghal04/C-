#pragma once

class Rectangle
{
    double length, breadth;

public:
    Rectangle();
    Rectangle(double);
    Rectangle(double, double);

    void setLength(double);
    void setBreadth(double);

    double getLength() const;
    double getBreadth() const;

    bool operator<(const Rectangle &) const;
    bool operator==(const Rectangle &) const;

    long double area() const;
    long double perimeter() const;
};