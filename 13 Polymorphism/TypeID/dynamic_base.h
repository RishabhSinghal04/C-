#pragma once

#include <iostream>

class DynamicBase
{
    public:
    virtual void functionDB() const
    {
        std::cout << "Dynamic Base :: functionDB called\n";
    }

    virtual ~DynamicBase() = default;
};