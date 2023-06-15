
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <set>
#include <utility>

template <typename T>
class comparator_left
{
public:
    bool operator()(const T &left, const T &right) const
    {
        return left < right;
    }
};

template <typename T>
class comparator_right
{
public:
    bool operator()(const T &left, const T &right) const
    {
        return left > right;
    }
};

template <typename T>
void display_elements(const T &elements)
{
    if (elements.empty())
    {
        std::cout << "Empty";
        return;
    }

    std::string separator{};

    std::cout << "{ ";
    for (const auto &element : elements)
    {
        std::cout << std::exchange(separator, ", ") << element;
    }
    std::cout << " }";
}

template <typename T>
void display_elements_reverse_order(const T &elements)
{
    if (elements.empty())
    {
        std::cout << "Empty";
        return;
    }

    std::string separator{};

    std::cout << "{ ";
    for (auto element = elements.rbegin(); element != elements.rend(); ++element)
    {
        std::cout << std::exchange(separator, ", ") << *element;
    }
    std::cout << " }";
}

int main()
{
    using namespace std;

    multiset<uint32_t> natural_numbers{1, 2, 3, 4, 5, 6, 7, 8, 1100, 9, 10, 10};
    multiset<uint32_t> whole_numbers{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    const uint16_t N = 110;

    auto display_dashes = [](const uint16_t NUM_OF_DASHES)
    {
        cout << string(NUM_OF_DASHES, '-');
    };

    display_elements(natural_numbers);
    cout << '\n';
    display_elements_reverse_order(whole_numbers);
    cout << '\n';

    // Capacity
    display_dashes(N);
    cout << "\nCapacity:-\n";

    cout << "max size : " << natural_numbers.max_size() << '\n';
    cout << "size : " << natural_numbers.size() << '\n';

    // Insert
    display_dashes(N);
    cout << "\nInsert:-\n";

    natural_numbers.insert(10);
    natural_numbers.insert(11);

    display_elements(natural_numbers);
    cout << '\n';

    // Emplace
    display_dashes(N);
    cout << "\nEmplace:-\n";

    natural_numbers.emplace(12);

    display_elements(natural_numbers);
    cout << '\n';

    // Erase
    display_dashes(N);
    cout << "\nErase:-\n";

    auto has_found = std::find(natural_numbers.begin(), natural_numbers.end(), 12);

    if (has_found != natural_numbers.end())
    {
        natural_numbers.erase(has_found);
    }

    display_elements(natural_numbers);
    cout << '\n';

    // Swap
    display_dashes(N);
    cout << "\nSwap:-\n";

    natural_numbers.swap(whole_numbers);

    display_elements(natural_numbers);
    cout << '\n';

    display_elements(whole_numbers);
    cout << '\n';

    whole_numbers.swap(natural_numbers);

    display_elements(natural_numbers);
    cout << '\n';

    display_elements(whole_numbers);
    cout << '\n';

    // Customizing the comparators
    display_dashes(N);
    cout << "\nCustomizing the comparators:-\n";

    multiset<int, less<int>> numbers{1, 2, 3, 4, 5, -1, -2, -3, -4, -5};                                // Built in functor
    multiset<double, greater<double>> numbers_2{1.0, 2.0, 3.0, 4.0, 5.0, -1.2, -2.2, -3.2, -4.2, -5.2}; // Built in functor
    multiset<int, comparator_left<int>> numbers_3{1, 2, 3, 4, 5, -1, -2, -3, -4, -5};
    multiset<int, comparator_right<int>> numbers_4{1, 2, 3, 4, 5, -1, -2, -3, -4, -5};

    display_elements(numbers);
    cout << '\n';
    display_elements(numbers_2);
    cout << '\n';
    display_elements(numbers_3);
    cout << '\n';
    display_elements(numbers_4);
    cout << '\n';

    // Clear
    display_dashes(N);
    cout << "\nClear:-\n";

    natural_numbers.clear();
    display_elements(natural_numbers);

    getch();
    return 0;
}