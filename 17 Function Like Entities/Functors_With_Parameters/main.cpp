
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <random>
#include <vector>

#include "is_in_range.h"

template <Number T>
void initialize_random_numbers(std::vector<T> &);

template <Number T>
void print_numbers(const std::vector<T> &);

template <Number T, typename R>
T range_sum(const std::vector<T> &, R);

int main()
{
    using namespace std;

    vector<int> integers(10);
    vector<float> floating_points(16);

    initialize_random_numbers(integers);
    initialize_random_numbers(floating_points);

    cout << "Integers are:-\n";
    print_numbers(integers);
    cout << '\n';

    cout << "Floating-Point Numbers are:-\n";
    print_numbers(floating_points);
    cout << '\n';

    cout << "Range Sum :-\n"
         << range_sum(floating_points, IsInRange<float>(-7.0F, 7.0F)) << '\n';
    cout << "Range Sum :-\n"
         << range_sum(integers, IsInRange<int>(-7, 7)) << '\n';

    getch();
    return 0;
}

template <Number T>
void initialize_random_numbers(std::vector<T> &numbers)
{
    int max = 10, min = -10;

    std::random_device rd;

    using dist_t = std::conditional_t<std::is_floating_point_v<T>,
                                      std::uniform_real_distribution<T>,
                                      std::uniform_int_distribution<T>>;

    dist_t dist(min, max);
    std::generate(numbers.begin(), numbers.end(), [&rd, &dist]()
                  { return dist(rd); });
}

template <Number T>
void print_numbers(const std::vector<T> &numbers)
{
    std::cout << "[ " << numbers[0];

    for (size_t index = 1; index < numbers.size(); ++index)
    {
        std::cout << ", " << numbers[index];
    }
    std::cout << " ]";
}

template <Number T, typename R>
T range_sum(const std::vector<T> &numbers, R is_in_range)
{
    T sum{};

    for (size_t index = 0; index < numbers.size(); ++index)
    {
        if (is_in_range(numbers[index]))
        {
            sum += numbers[index];
        }
    }

    return sum;
}
