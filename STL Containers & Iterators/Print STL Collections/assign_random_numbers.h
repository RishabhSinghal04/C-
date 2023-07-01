#pragma once

#include <algorithm>
#include <random>

#include "type_number.h"

/**
 * @brief A template function to initialize sequence containers with random numbers
 * @tparam NC Number Container
 * @tparam I Integer
 * @param MIN Start index of range
 * @param MAX End index of range
 * @note If MIN is greater than MAX, container will be uninitialized
 * @note Size must be greater than 0
 */
template <Number_Container NC, INT I>
void assign_random_numbers(NC &container, const I &MIN, const I &MAX)
{
    if (container.empty() || MIN > MAX)
    {
        return;
    }

    std::random_device rd;
    using dist_t = std::conditional_t<std::is_floating_point_v<typename NC::value_type>,
                                      std::uniform_real_distribution<>,
                                      std::uniform_int_distribution<>>;
    dist_t dist(MIN, MAX);
    std::ranges::generate(container, [&dist, &rd]()
                          { return dist(rd); });
}

/**
 * @brief A template function to initialize std::set with random numbers
 * @tparam NC Number Container
 * @tparam I Integer
 * @param SIZE size of std::set container
 * @param MIN Start index of range
 * @param MAX End index of range
 * @note If MIN is greater than MAX, container will be uninitialized
 * @note Size must be greater than 0
 */
template <Number_Container NC, INT I>
void assign_random_numbers(NC &container, const size_t &SIZE, const I &MIN, const I &MAX)
{
    if (SIZE == 0 || MIN > MAX)
    {
        return;
    }

    std::random_device rd;
    using dist_t = std::conditional_t<std::is_floating_point_v<typename NC::value_type>,
                                      std::uniform_real_distribution<>,
                                      std::uniform_int_distribution<>>;
    dist_t dist(MIN, MAX);
    std::generate_n(std::inserter(container, container.end()), SIZE, [&dist, &rd]()
                    { return dist(rd); });
}