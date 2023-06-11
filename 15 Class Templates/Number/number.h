#pragma once

#include <concepts>

template <typename T>
class Number
{
    T num;

public:
    Number()
        : Number(0) {}
    Number(const T &num)
        : num{num} {}

    // __Getter__
    const T &getNumber() const
    {
        return num;
    }

    // __Setter__
    void setNumber(const T &num)
    {
        this->num = num;
    }
};