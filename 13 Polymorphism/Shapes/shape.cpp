#include <string>

#include "shape.h"

Shape::Shape()
    : Shape("")
{
}

Shape::Shape(const std::string &description)
    : description{description}
{
}

Shape::~Shape()
{
    std::cout << "\n----Shape Destructor Called-----\n";
}

// __Setter__
const std::string &Shape::get_description() const
{
    return description;
}

// __Getter__
void Shape::set_description(const std::string &description)
{
    this->description = description;
}

// Other Functions
void Shape::shape_description() const
{
    std::cout << "Class : Shape \t Shape Description : " << description << '\n';
}
