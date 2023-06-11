#pragma once

#include "static_base.h"

class StaticDerived : public StaticBase
{
    void functionDB() const
    {
        std::cout << "Static Derived :: functionDb called\n";
    }
};