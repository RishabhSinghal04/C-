
#include <iostream>
#include <conio.h>
#include <array>
#include <concepts>

// Display Array Elements
template <typename T, size_t size>
void display_elements(const std::array<T, size> &elements)
{
    std::cout << "[ " << elements.at(0);
    for (size_t index = 0ULL; index < size; ++index)
    {
        std::cout << ", " << elements[index];
    }
    std::cout << " ]";
}

int main()
{
    using namespace std;

    // Constructing std::array
    array<int, 3> integers1;       // Contain junk by default
    array<int, 3> integers2{1, 2}; // Contain 1, 2, 0
    array<int, 3> integers3{};     // Contain 0s only
    array integers4{1, 2};         // Compiler deduce std::array<int,2>

    array<float, 10> floating_points{};

    cout << fixed;
    cout << "integers2.at(2) = " << integers2.at(2);
    cout << '\n';

    // Display elements
    display_elements(floating_points);
    cout << '\n';

    // Fill entire array with an element
    integers1.fill(11);
    floating_points.fill(10);

    display_elements(integers1);
    cout << '\n';
    display_elements(floating_points);
    cout << '\n';

    getch();
    return 0;
}