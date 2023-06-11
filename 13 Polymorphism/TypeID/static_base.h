#pragma once

#include <iostream>

class StaticBase
{
    void functionDB() const
    {
        std::cout << "Static Base :: functionDb called\n";
    }
};