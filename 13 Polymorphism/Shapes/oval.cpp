
#include "oval.h"

Oval::Oval()
    : Oval("Oval", 0.0, 0.0)
{
}

Oval::Oval(const std::string &description, const double &major_axis_radius, const double &minor_axis_radius)
    : Shape(description),
      major_axis_radius{major_axis_radius},
      minor_axis_radius{minor_axis_radius}
{
}

Oval::~Oval()
{
    std::cout << "\n----Oval Destructor Called-----\n";
}

// __Getters__
const double Oval::get_major_axis_radius() const
{
    return major_axis_radius;
}

const double Oval::get_minor_axis_radius() const
{
    return minor_axis_radius;
}

// __Setters__
void Oval::set_major_axis_radius(const double &major_axis_radius)
{
    this->major_axis_radius = major_axis_radius;
}

void Oval::set_minor_axis_radius(const double &minor_axis_radius)
{
    this->minor_axis_radius = minor_axis_radius;
}

// Other Functions
void Oval::shape_description() const
{
    std::cout << "Class : Oval \t Shape Description : " << Shape::get_description()
              << " \t Major Axis Radius : " << major_axis_radius
              << " \t Minor Axis Radius : " << minor_axis_radius << '\n';
}
