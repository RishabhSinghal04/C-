#include "ellipse.h"

int Ellipse::m_count{0};

Ellipse::Ellipse(double x_radius, double y_radius, std::string_view description)
    : Shape(description), m_x_radius(x_radius), m_y_radius(y_radius)
{
    ++m_count;
}

Ellipse::Ellipse()
    : Ellipse(0.0, 0.0, "No Description")
{
}

Ellipse::~Ellipse()
{
    --m_count;
    std::cout << "\n-----Ellipse Destructor Called-----\n";
}
