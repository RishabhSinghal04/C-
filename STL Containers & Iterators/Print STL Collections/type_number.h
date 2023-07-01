#pragma once

#include <concepts>
#include <ranges>

template <typename CH>
concept CHAR = (std::is_same_v<CH, char> || std::is_same_v<CH, const char>);

template <typename B>
concept BOOL = std::is_same_v<B, bool>;

template <typename N>
concept NUM = (std::is_arithmetic_v<N> && !(CHAR<N> || BOOL<N>));

template <typename I>
concept INT = (NUM<I> && (!std::is_floating_point_v<I>));

template <typename Container>
concept Number_Container = requires {
    requires std::ranges::range<Container>;
    requires NUM<std::ranges::range_value_t<Container>>;
};

template <typename Container>
concept Integer_Container = requires {
    requires std::ranges::range<Container>;
    requires INT<std::ranges::range_value_t<Container>>;
};