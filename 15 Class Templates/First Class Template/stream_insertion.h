#pragma once

#include <iostream>

class StreamInsertion
{
public:
    virtual void printInformation() const = 0;
};

std::ostream &operator<<(std::ostream &, const StreamInsertion &);