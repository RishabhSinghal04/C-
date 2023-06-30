
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <set>
#include <vector>

struct Sum
{
    void operator()(int num)
    {
        sum += num;
    }
    long double sum{};
};

int main()
{
    using namespace std;

    set<int> integers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -2, -3, -4, -5};
    vector<int> integers_vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -2, -3, -4, -5};

    auto print = [](const int &num)
    {
        cout << " " << num;
    };

    for_each(begin(integers), end(integers), print);
    cout << '\n';

    for_each(begin(integers_vec), end(integers_vec), [](int &num)
             { ++num; });

    for_each(begin(integers_vec), end(integers_vec), print);
    cout << '\n';

    Sum s;

    s = for_each(begin(integers_vec), end(integers_vec), s);
    cout << "Sum is (vector) " << s.sum << '\n';

    s.sum = 0;

    s = for_each(begin(integers), end(integers), s);
    cout << "Sum is (set) " << s.sum << '\n';

    int result{};

    for_each(begin(integers), end(integers), [&result](int num)
             { result += num; });
    cout << "Sum is (set) " << result << '\n';

    result = 0;

    for_each(begin(integers_vec), end(integers_vec), [&result](int &num)
             { result += num; });
    cout << "Sum is (vector) " << result << '\n';

    getch();
    return 0;
}