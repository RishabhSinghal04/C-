
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <deque>
#include <set>
#include <vector>

int main()
{
    using namespace std;

    vector<int> integers{1, 34, 4, 7, -8, -4, 8, 23, 58, 62, 498, 15, 34762, 483, 2};
    vector<int> integers_2{-819, 579, -786, 48, 4236, 924, 569, 42376, 42375, 769};
    vector<int> integers_3{12, 35, 547, 78, 56, 13, 9 - 8, 5437, -7, 659, 423676, 7};

    auto display = [](const int &num)
    {
        cout << "  " << num;
    };

    cout << '[';
    for_each(begin(integers), end(integers), display);
    cout << " ]\n";

    cout << '[';
    for_each(begin(integers_2), end(integers_2), display);
    cout << " ]\n";

    cout << '[';
    for_each(begin(integers_3), end(integers_3), display);
    cout << " ]\n";

    copy(begin(integers), begin(integers) + 4, end(integers_2) - 4);

    cout << '[';
    for_each(begin(integers_2), end(integers_2), display);
    cout << " ]\n";

    auto is_even_num = [](const uint16_t &num)
    {
        return num % 2 == 0;
    };

    copy_if(begin(integers_3), end(integers_3), begin(integers), is_even_num);

    cout << '[';
    for_each(begin(integers), end(integers), display);
    cout << " ]\n";

    getch();
    return 0;
}