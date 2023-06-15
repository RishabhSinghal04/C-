
#include <iostream>
#include <conio.h>
#include <deque>
#include <list>
#include <queue>
#include <utility>
#include <vector>

template <typename T, typename Container>
void display_queue(std::queue<T, Container> _queue)
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
        std::cout << std::exchange(separator, ", ") << _queue.front();
        _queue.pop();

    } while (!_queue.empty());

    std::cout << " ]";
}

template <typename T, typename Container>
void clear_queue(std::queue<T, Container> &_queue)
{
    while (!_queue.empty())
    {
        _queue.pop();
    }
}

int main()
{
    using namespace std;

    queue<int> integers;

    integers.emplace(1);
    integers.emplace(2);
    integers.emplace(3);
    integers.emplace(4);
    integers.emplace(5);
    integers.emplace(-1);

    display_queue(integers);
    cout << '\n';

    integers.front() = 110;
    integers.back() = -110;

    display_queue(integers);
    cout << '\n';

    clear_queue(integers);

    display_queue(integers);
    cout << '\n';

    queue<int, list<int>> integers_2;
    queue<int, deque<int>> integers_3;

    integers_2.emplace(51);
    integers_2.emplace(52);
    integers_2.emplace(53);
    integers_2.emplace(54);

    display_queue(integers_2);
    cout << '\n';

    clear_queue(integers_2);

    integers_3.emplace(501);
    integers_3.emplace(502);
    integers_3.emplace(503);
    integers_3.emplace(504);

    display_queue(integers_3);
    cout << '\n';

    clear_queue(integers_3);
    cout << '\n';

    getch();
    return 0;
}