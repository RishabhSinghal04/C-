
#include <iostream>
#include <conio.h>
#include <queue>
#include <utility>

template <typename T, typename Container, typename Compare>
void display_priority_queue(std::priority_queue<T, Container, Compare> _queue)
{
    if (_queue.empty())
    {
        std::cout << "Empty";
        return;
    }

    std::string separator{};

    std::cout << "[ ";
    do
    {
        std::cout << std::exchange(separator, ", ") << _queue.top();
        _queue.pop();

    } while (!_queue.empty());

    std::cout << " ]";
}

template <typename T, typename Container, typename Compare>
void clear_queue(std::priority_queue<T, Container, Compare> &_queue)
{
    while (!_queue.empty())
    {
        _queue.pop();
    }
}

int main()
{
    using namespace std;

    priority_queue<int> integers;

    integers.emplace(10);
    integers.emplace(11);
    integers.emplace(110);
    integers.emplace(1);

    display_priority_queue(integers);
    cout << '\n';

    priority_queue<int, vector<int>, greater<int>> integers_2;

    integers_2.emplace(11);
    integers_2.emplace(-1);
    integers_2.emplace(1000);
    integers_2.emplace(-110);

    display_priority_queue(integers_2);
    cout << '\n';

    auto compare = [](int left, int right)
    {
        return left > right;
    };

    priority_queue<int, vector<int>, decltype(compare)> integers_3;

    integers_3.emplace(110);
    integers_3.emplace(-10);
    integers_3.emplace(1001);
    integers_3.emplace(-1100);

    display_priority_queue(integers_3);
    cout << '\n';

    clear_queue(integers);
    clear_queue(integers_2);
    clear_queue(integers_3);
    cout << '\n';

    getch();
    return 0;
}