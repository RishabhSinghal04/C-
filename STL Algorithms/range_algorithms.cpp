
#include <iostream>
#include <conio.h>

#include <algorithm>
#include <deque>
#include <set>
#include <vector>

#include <concepts>
#include <utility>

template <typename BAC>
concept bool_and_char = (std::is_same_v<BAC, char> ||
                         std::is_same_v<BAC, std::uint8_t> ||
                         std::is_same_v<BAC, const char> ||
                         std::is_same_v<BAC, bool>);

template <typename N>
concept Number = (std::is_arithmetic_v<N>)&&(!bool_and_char<N>);

template <typename I>
concept Integer = Number<I> && (!std::is_floating_point_v<I>);

template <typename Container>
concept number_container = requires(Container C) {
    requires std::ranges::range<Container>;
    requires Number<std::ranges::range_value_t<Container>>;
};

template <typename Container>
concept integer_container = requires(Container C) {
    requires std::ranges::range<Container>;
    requires Integer<std::ranges::range_value_t<Container>>;
};

template <typename T>
void display_elements(const T &);

template <integer_container I>
bool all_odd_numbers(const I &);

template <number_container N>
void sort_numbers_ascending(N &);

template <number_container N>
void sort_numbers_descending(N &);

template <integer_container I>
auto find_even_number(const I &container)
{
    return std::ranges::find_if(container, [](const auto &num)
                                { return num % 2 == 0; });
}

int main()
{
    using namespace std;

    deque<int> integers{1, 4, 6, 0, -3, 35, -354, -965, 43, 234};
    set<uint32_t> whole_numbers{0, 1, 4, 6, 8, 2, 7, 90, 1, 6, 782, 8, 2789, 12};
    vector<double> floating_point_numbers{23.56, 26.568, 126598.126, 6235.26, 405.25, -346.47, -535};

    set<int> odd_num{1, 3, 5, 7, 9};
    set<int> even_num{2, 4, 6, 8, 0};

    cout << "[ ";
    display_elements(integers);
    cout << " ]\n";

    cout << "[ ";
    display_elements(whole_numbers);
    cout << " ]\n";

    cout << "[ ";
    display_elements(floating_point_numbers);
    cout << " ]\n";

    all_odd_numbers(even_num)
        ? cout << "All Odd Numbers\n"
        : cout << "Not all Odd Numbers\n";

    all_odd_numbers(odd_num)
        ? cout << "All Odd Numbers\n"
        : cout << "Not all Odd Numbers\n";

    all_odd_numbers(whole_numbers)
        ? cout << "All Odd Numbers\n"
        : cout << "Not all Odd Numbers\n";

    auto result = find_even_number(odd_num);
    result != end(odd_num)
        ? cout << "At least one Even Number\n"
        : cout << "No Even Number\n";

    auto result2 = find_even_number(even_num);
    result2 != end(even_num)
        ? cout << "At least one Even Number\n"
        : cout << "No Even Number\n";

    auto result3 = find_even_number(whole_numbers);
    result3 != end(whole_numbers)
        ? cout << "At least one Even Number\n"
        : cout << "No Even Number\n";

    sort_numbers_ascending(floating_point_numbers);
    cout << "[ ";
    display_elements(floating_point_numbers);
    cout << " ]\n";

    sort_numbers_descending(integers);
    cout << "[ ";
    display_elements(integers);
    cout << " ]\n";

    getch();
    return 0;
}

template <typename T>
void display_elements(const T &container)
{
    std::string_view separator{};
    std::ranges::for_each(container, [&separator](const auto &element)
                          { std::cout << std::exchange(separator, ", ") << element; });
}

template <integer_container I>
bool all_odd_numbers(const I &container)
{
    return std::ranges::all_of(container, [](const auto &num)
                               { return num % 2 != 0; });
}

template <number_container N>
void sort_numbers_ascending(N &container)
{
    std::ranges::sort(container);
}

template <number_container N>
void sort_numbers_descending(N &container)
{
    std::ranges::sort(container, std::greater<>());
}
