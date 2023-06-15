
#include <iostream>
#include <conio.h>
#include <array>
#include <vector>

// Uniform traversal of containers
template <typename T>
void display_elements(const T &elements)
{
    auto element = elements.begin(); // Iterator

    std::cout << "[ " << *element;
    for (++element; element != elements.end(); ++element)
    {
        std::cout << ", " << *element;
    }
    std::cout << " ]";
}

template <typename T>
void display_elements(const T &elements, const size_t begin_adjustment, const size_t end_adjustment)
{
    auto element_start_index = elements.begin() + begin_adjustment;
    auto element_end_index = elements.end() - end_adjustment;

    if (element_start_index >= element_end_index)
    {
        std::cerr << "Start Index >= End Index";
        return;
    }

    std::cout << "[ " << *element_start_index;
    for (++element_start_index; element_start_index != element_end_index; ++element_start_index)
    {
        std::cout << ", " << *element_start_index;
    }
    std::cout << " ]";
}

void reverse_iterators();
void constant_iterators();
void constant_reverse_iterators();

int main()
{
    using namespace std;

    array<double, 11> floating_points{};
    vector<int> integers(10U, 0);

    cout << fixed;
    display_elements(floating_points);
    cout << '\n';
    display_elements(integers);
    cout << '\n';

    array<double, 5> floating_point2{1.0, 2.0, 3.0, 4.0, 5.0};
    vector<int> integers2(10U, 1);

    display_elements(floating_point2, 1, 1);
    cout << '\n';
    display_elements(floating_point2, 1, 4);
    cout << '\n';
    display_elements(integers2, 2, 2);
    cout << '\n';

    cout << string(110, '-')
         << "\nReverse Iterators:-\n";
    reverse_iterators();

    cout << string(110, '-')
         << "\nConstant Iterators:-\n";
    constant_iterators();

    cout << string(110, '-')
         << "\nConstant Reverse Iterators:-\n";
    constant_reverse_iterators();

    // Const iterators from const containers
    const vector<uint16_t> const_integers{1, 2, 3, 4, 5};
    const array<float, 4U> const_floating_points{1.0F, 5.47F, 10.0F, 29.22F};

    auto it_const_integers = const_integers.begin();
    auto it_const_floating_points = const_floating_points.begin();

    // std::begin(T) and std::end(T)
    cout << string(110, '-')
         << "\nstd::begin(T) and std::end(T):-\n";

    for (auto index = begin(const_integers); index < end(const_integers); ++index)
    {
        cout << *index << "  ";
    }
    cout << '\n';

    for (auto index = begin(const_floating_points); index < end(const_floating_points); ++index)
    {
        cout << *index << "  ";
    }
    cout << '\n';

    getch();
    return 0;
}

void reverse_iterators()
{
    using namespace std;

    vector<uint16_t> natural_numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<uint16_t>::reverse_iterator rev_it = natural_numbers.rbegin();

    cout << "[ " << *rev_it;
    for (++rev_it; rev_it != natural_numbers.rend(); ++rev_it)
    {
        cout << ", " << *rev_it;
    }
    cout << " ]\n";
}

void constant_iterators()
{
    using namespace std;

    array<uint16_t, 10> whole_numbers{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto const_it = whole_numbers.cbegin();

    cout << "[ " << *const_it;
    for (++const_it; const_it != whole_numbers.cend(); ++const_it)
    {
        cout << ", " << *const_it;
    }
    cout << " ]\n";
}

void constant_reverse_iterators()
{
    using namespace std;

    array<uint16_t, 10> natural_numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto const_rev_it = natural_numbers.crbegin();

    cout << "[ " << *const_rev_it;
    for (++const_rev_it; const_rev_it != natural_numbers.crend(); ++const_rev_it)
    {
        cout << ", " << *const_rev_it;
    }
    cout << " ]\n";
}
