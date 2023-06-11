#include "animal.h"

Animal::Animal(std::string_view description)
    : m_description(description)
{
}

Animal::~Animal()
{
    std::cout << "\n-----Animal Destructor Called-----\n";
}
