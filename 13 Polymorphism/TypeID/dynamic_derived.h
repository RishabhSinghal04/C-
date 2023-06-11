#pragma once

#include "dynamic_base.h"

class DynamicDerived : public DynamicBase
{
public:
    virtual void functionDB() const override
    {
        std::cout << "Dynamic Derived :: functionDB called\n";
    }

    virtual ~DynamicDerived() = default;
};