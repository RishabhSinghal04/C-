
#include <iostream>
#include <conio.h>

#include <algorithm>
#include <string>
#include <vector>

template <typename T>
std::ostream &operator<<(std::ostream &out, const std::vector<T> &vec)
{
    std::string_view separator{};
    std::ranges::for_each(vec, [&separator](const auto &element)
                          { std::cout << std::__exchange(separator, ", ") << element; });
    return out;
}

int main()
{
    using namespace std;

    vector<int> integers_1{1, 3, 5, 2, 6, 2, 6, 26, 2, 4, 90, 7, 89, 4, 0};
    cout << integers_1 << '\n';

    vector<int> integers_2(integers_1.size());

    ranges::copy(integers_1.begin(), integers_1.end(), integers_2.begin());

    cout << integers_2 << '\n';

    getch();
    return 0;
}