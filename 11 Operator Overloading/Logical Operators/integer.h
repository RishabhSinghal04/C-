#pragma once

class Integer
{
    long long num;

public:
    Integer() = default;
    explicit Integer(long long num)
        : num{num} {};

    long long getInteger() const
    {
        return num;
    }

    // bool operator==(const Integer &integer) const = default;
    bool operator==(const Integer &integer) const
    {
        return (num == integer.num) ? true : false;
    }

    bool operator<(const Integer &integer) const
    {
        return this->num < integer.num;
    }
};