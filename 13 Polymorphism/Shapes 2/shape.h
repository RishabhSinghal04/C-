#pragma once

#include <iostream>
#include <string>

class Shape
{
    std::string description{};

public:
    Shape()
        : Shape("")
    {
    }

    Shape(const std::string &description)
        : description{description}
    {
    }

    // __Setter__
    const std::string &get_description() const
    {
        return description;
    }

    // __Getter__
    void set_description(const std::string &description)
    {
        this->description = description;
    }

    // Other Functions
    virtual void shape_description() const
    {
        std::cout << "Class : Shape \t Shape Description : " << description << '\n';
    }

    virtual void shape_description(const std::string &color) const
    {
        std::cout << "Class : Shape \t Shape Color : " << color << '\n';
    }
};