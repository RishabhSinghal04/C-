#pragma once

class Rectangle
{
    float length, breadth;

public:
    Rectangle();

    Rectangle(const float &l, const float &b);

    double getLength();
    double getBreadth();

    double perimeter();
    double area();
};