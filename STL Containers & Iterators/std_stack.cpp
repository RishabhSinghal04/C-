
#include <iostream>
#include <conio.h>
#include <deque>
#include <list>
#include <stack>
#include <utility>
#include <vector>

/* template <typename T>
void display_stack(std::stack<T> _stack)
{
    if (_stack.empty())
    {
        std::cout << "Empty";
        return;
    }

    std::string separator{};

    std::cout << "[ ";
    do
    {
        std::cout << std::exchange(separator, ", ") << _stack.top();
        _stack.pop();

    } while (!_stack.empty());
    std::cout << " ]";
}

template <typename T>
void clear_stack(std::stack<T> &_stack)
{
    while (!_stack.empty())
    {
        _stack.pop();
    }
} */

template <typename T, typename Container>
void display_stack(std::stack<T, Container> _stack)
{
    if (_stack.empty())
    {
        std::cout << "Empty";
        return;
    }

    std::string separator{};

    std::cout << "[ ";
    do
    {
        std::cout << std::exchange(separator, ", ") << _stack.top();
        _stack.pop();

    } while (!_stack.empty());
    std::cout << " ]";
}

template <typename T, typename Container>
void clear_stack(std::stack<T, Container> &_stack)
{
    while (!_stack.empty())
    {
        _stack.pop();
    }
}

int main()
{
    using namespace std;

    stack<int> integers;

    display_stack(integers);
    cout << '\n';

    integers.emplace(1);
    integers.emplace(-1);
    integers.emplace(2);
    integers.emplace(-2);

    display_stack(integers);
    cout << '\n';

    integers.top() = 12;

    display_stack(integers);
    cout << '\n';

    clear_stack(integers);
    display_stack(integers);

    stack<int, vector<int>> integers_2;
    stack<int, list<int>> integers_3;
    stack<int, deque<int>> integers_4;

    cout << '\n' << string(110U, '-') << '\n';

    integers_2.emplace(11);
    integers_2.emplace(12);
    integers_2.emplace(13);
    integers_2.emplace(14);

    display_stack(integers_2);
    clear_stack(integers_2);

    cout << '\n' << string(110U, '-') << '\n';

    integers_3.emplace(101);
    integers_3.emplace(102);
    integers_3.emplace(103);
    integers_3.emplace(104);

    display_stack(integers_3);
    clear_stack(integers_3);

    cout << '\n' << string(110U, '-') << '\n';

    integers_4.emplace(1001);
    integers_4.emplace(1002);
    integers_4.emplace(1003);
    integers_4.emplace(1004);

    display_stack(integers_4);
    clear_stack(integers_4);

    getch();
    return 0;
}