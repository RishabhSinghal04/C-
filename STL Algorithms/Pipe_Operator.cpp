
#include <iostream>
#include <conio.h>

#include <concepts>
#include <random>
#include <string>
#include <utility>

#include <algorithm>
#include <ranges>
#include <vector>

template <typename CH>
concept CHAR = (std::is_same_v<CH, char> || std::is_same_v<CH, const char>);

template <typename B>
concept BOOL = std::is_same_v<B, bool>;

template <typename N>
concept Number = (std::is_arithmetic_v<N> && (!(CHAR<N> && BOOL<N>)));

template <typename I>
concept Integer = (Number<I> && (!std::is_floating_point_v<I>));

template <typename Container>
concept Number_Container = requires(Container C) {
    requires std::ranges::range<Container>;
    requires Number<std::ranges::range_value_t<Container>>;
};

template <typename Container>
concept Integer_Container = requires(Container C) {
    requires std::ranges::range<Container>;
    requires Integer<std::ranges::range_value_t<Container>>;
};

/**
 * @brief Initialize a container with random numbers
 * @tparam NC Real Number
 * @tparam I Integer
 * @param  & STL container
 * @param  const I& MIN
 * @param  const I& MAX
 * @note If MIN is greater than MAX, returns unitialized container.
 */
template <Number_Container NC, Integer I>
void initialize_random_numbers(NC &, const I &, const I &);

template <typename T>
void display_container_elements(const T &);

template <typename T>
void display_view(T);

int main()
{
    using namespace std;

    vector<int> integers(10U, 0);
    vector<double> floating_point_numbers(10U, 0.0);

    string initialized_message{};
    const int64_t MIN = -1000, MAX = 1000;

    auto is_zero = [](const auto &num)
    {
        return num == 0.0;
    };

    initialize_random_numbers(integers, MIN, MAX);
    initialize_random_numbers(floating_point_numbers, MIN, MAX);

    if (ranges::all_of(integers, is_zero))
    {
        initialized_message = "-----Integers Uninitialized-----\n";
    }
    if (ranges::all_of(floating_point_numbers, is_zero))
    {
        initialized_message += "-----Floating Points Uninitialized-----\n";
    }
    if (!initialized_message.empty())
    {
        cout << initialized_message;
    }

    cout << fixed;
    cout.precision(4);

    cout << "[ ";
    display_container_elements(integers);
    cout << " ]\n";

    cout << "[ ";
    display_container_elements(floating_point_numbers);
    cout << " ]\n";

    auto even_num = [](const auto &num)
    {
        return num % 2 == 0;
    };
    auto odd_num = [](const auto &num)
    {
        return num % 2 != 0;
    };

    auto transform_even_numbers = integers | views::filter(even_num) |
                                  views::transform([](auto num)
                                                   { return num * 10; });

    cout << "\nAfter transformation:-\n";
    display_view(transform_even_numbers);
    cout << '\n';

    display_view(integers | views::filter(odd_num) | views::transform([](auto num)
                                                                      { return num * 10; }));

    getch();
    return 0;
}

template <Number_Container NC, Integer I>
void initialize_random_numbers(NC &container, const I &MIN, const I &MAX)
{
    if (MIN > MAX)
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

template <typename T>
void display_container_elements(const T &container)
{
    std::string_view separator{};
    std::ranges::for_each(container, [&separator](const auto &element)
                          { std::cout << std::exchange(separator, ", ") << element; });
}

template <typename T>
void display_view(T view)
{
    std::string_view separator{};
    std::ranges::for_each(view, [&separator](auto element)
                          { std::cout << std::exchange(separator, ", ") << element; });
}