#pragma once
#include <string>

class Square
{
    float side;
    std::string color;
    uint16_t shading;
    float position;

public:
    Square();

    // Two separate constructors
    explicit Square(const float &);
    Square(const float &, const std::string &, const uint16_t &, const float &);

    void setSide(const float &);

    float getSide() const;
    float area() const;
};