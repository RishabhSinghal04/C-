#pragma once

#include "animal.h"

class Feline : public Animal
{
public:
    Feline() = default;
    Feline(std::string_view fur_style, std::string_view description);
    virtual ~Feline();

    virtual void run() const
    {
        std::cout << "Feline " << m_description << " is running" << '\n';
    }

    void do_some_feline_thingy()
    {
        std::cout << "Doing some feline thingy....\n";
    }

    std::string m_fur_style;
};
