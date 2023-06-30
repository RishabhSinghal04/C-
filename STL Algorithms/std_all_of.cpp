
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <cmath>
#include <vector>

int main()
{
    using namespace std;

    vector<int> integers;
    integers.reserve(10);

    integers.emplace_back(11);
    integers.emplace_back(1);
    // integers.emplace_back(2);
    integers.emplace_back(7);
    integers.emplace_back(9);

    all_of(begin(integers), end(integers), [](int i)
           { return i % 2 != 0; })
        ? cout << "All odd numbers in the collection\n"
        : cout << "Not all numbers are odd in the collection\n";

    auto max_integer = max_element(begin(integers), end(integers));
    cout << "Largest integer is " << *max_integer << '\n';

    auto min_integer = min_element(begin(integers), end(integers));
    cout << "Smallest integer is " << *min_integer << '\n';

    // Closest and farthest elements
    const int num = 7;
    auto distance = [&num](const int &a, const int &b)
    {
        return abs(a - num) < abs(b - num);
    };

    auto result = min_element(begin(integers), end(integers), distance);
    cout << *result << " is closest to " << num << '\n';

    result = max_element(begin(integers), end(integers), distance);
    cout << *result << " is farthest to " << num << '\n';

    const auto [closest, farthest] = minmax_element(begin(integers), end(integers), distance);
    cout << *closest << " is closest to " << num << '\n';
    cout << *farthest << " is farthest to " << num << '\n';

    getch();
    return 0;
}