#pragma once

#include <string>

class Cube
{
    double side;
    std::string color;

public:
    Cube();
    Cube(double);
    Cube(double, std::string);
    //~Cube();

    double getSide() const;
    std::string getColor() const;

    void setSide(double);
    void setColor(std::string);

    long double volume() const;
};