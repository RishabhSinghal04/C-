#include "bird.h"

Bird::Bird(std::string_view wing_color, std::string_view description)
    : Animal(description), m_wing_color(wing_color)
{
}

Bird::~Bird()
{
    std::cout << "\n-----Bird Destructor Called-----\n";
}
