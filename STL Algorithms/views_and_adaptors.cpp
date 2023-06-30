
#include <iostream>
#include <conio.h>

#include <algorithm>
#include <ranges>
#include <utility>
#include <vector>

void display_elements(const auto &elements)
{
    std::ranges::for_each(elements, [](const auto &element)
                          { std::cout << " " << element; });
}

void display_elements_view(auto elements)
{
    std::ranges::for_each(elements, [](auto element)
                          { std::cout << " " << element; });
}

int main()
{
    using namespace std;

    using pair = pair<uint16_t, string>;
    vector<pair> number_names{{1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}};

    vector<int> integers{1, 3, 5, 7, 2, 4, 2, 6, 21, 7, 2, 7, -2, -457};

    auto even_num = [](const auto &num)
    {
        return num % 2 == 0;
    };

    auto odd_num = [](const auto &num)
    {
        return num % 2 != 0;
    };

    display_elements(integers);
    cout << '\n';

    ranges::filter_view view_even_num = ranges::filter_view(integers, even_num);

    display_elements_view(view_even_num);
    cout << '\n';

    display_elements_view(ranges::filter_view(integers, [](const auto &num)
                                              { return num % 2 != 0; }));
    cout << '\n';

    display_elements_view(ranges::transform_view(integers, [](auto &num)
                                                 { return num * 10; }));
    cout << '\n';

    display_elements_view(ranges::take_view(integers, 5U));
    cout << '\n';

    display_elements_view(ranges::take_while_view(integers, odd_num));
    cout << '\n';

    display_elements_view(ranges::drop_view(integers, 5U));
    cout << '\n';

    display_elements_view(ranges::drop_while_view(integers, odd_num));
    cout << '\n';

    auto view_keys = views::keys(number_names);
    auto view_values = views::values(number_names);

    display_elements_view(view_keys);
    cout << '\n';
    display_elements_view(view_values);
    cout << '\n';

    display_elements_view(views::keys(number_names));
    cout << '\n';
    display_elements_view(views::values(number_names));
    cout << '\n';

    display_elements_view(views::filter(integers, even_num));
    cout << '\n';

    display_elements(integers);

    getch();
    return 0;
}