
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <deque>
#include <vector>

int main()
{
    using namespace std;

    deque<int> integers{1, 2, 4, 76, 2, 7, 76, 2, -653, -9, 37, 547, -8, 10 - 2};
    vector<double> floating_points{76.246, 457.579, -96.968, 3577 - 857.65, 357, 25, 156, 82568.578};

    auto display = [](const auto &num)
    {
        cout << "  " << num;
    };

    cout << fixed;

    cout << '[';
    for_each(begin(integers), end(integers), display);
    cout << " ]\n";

    cout << '[';
    for_each(begin(floating_points), end(floating_points), display);
    cout << " ]\n";

    sort(begin(integers), end(integers));
    sort(begin(floating_points), end(floating_points), greater<double>());

    cout << '[';
    for_each(begin(integers), end(integers), display);
    cout << " ]\n";

    cout << '[';
    for_each(begin(floating_points), end(floating_points), display);
    cout << " ]\n";

    getch();
    return 0;
}