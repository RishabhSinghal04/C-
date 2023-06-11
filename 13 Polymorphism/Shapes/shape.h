#pragma once

#include <iostream>
#include <string>

/**
 * @brief A class for the description of different shapes.
 */
class Shape
{
    std::string description{};

public:
    Shape();
    Shape(const std::string &);
    virtual ~Shape();

    const std::string &get_description() const;
    void set_description(const std::string &);

    // void shape_description() const;  // Static Binding
    virtual void shape_description() const; // Dynamic Binding
};