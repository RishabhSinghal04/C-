#pragma once

#include <concepts>

template <typename T>
concept Number = ((std::is_integral_v<T> ||
                   std::is_floating_point_v<T>)&&(!(std::is_same_v<T, char> ||
                                                    std::is_same_v<T, const char> ||
                                                    std::is_same_v<T, bool>)));

template <Number T>
class IsInRange
{
    T min, max;

public:
    IsInRange(T min, T max)
        : min{min}, max{max} {}

    bool operator()(T value) const
    {
        return (value >= min) && (value <= max);
    }
};