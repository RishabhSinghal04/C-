
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <vector>

int main()
{
    using namespace std;

    vector<int> integers{1, 2, 5, 8, 2, 65, 8, 1, 6, 9, 235, 80, 99};
    vector<int> floating_points{2, 967};

    auto display = [](const auto& num)
    {
        cout << "  " << num;
    };

    cout << '[';
    for_each(begin(integers), end(integers), display);
    cout << " ]\n";
    
    cout << '[';
    for_each(begin(floating_points), end(floating_points), display);
    cout << " ]\n";

    transform(integers.begin(), integers.end(), begin(floating_points), [](auto num)
              { return num * 2; });

    cout << '[';
    for_each(begin(integers), end(integers), display);
    cout << " ]\n";

    cout << '[';
    for_each(begin(floating_points), end(floating_points), display);
    cout << " ]\n";

    transform(integers.begin(), integers.end(), back_inserter(floating_points), [](auto num)
              { return num * 2; });

    cout << '[';
    for_each(begin(floating_points), end(floating_points), display);
    cout << " ]\n";

    getch();
    return 0;
}