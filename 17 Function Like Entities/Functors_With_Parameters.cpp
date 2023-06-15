
#include <iostream>
#include <conio.h>
#include <concepts>
#include <random>
#include <vector>

template <typename T>
concept Number = std::is_integral_v<T> || std::is_floating_point_v<T> &&
                                              (!std::is_same_v<T, char>)&&(!std::is_same_v<T, bool>);

// Class Definition
template <Number T>
class IsInRange
{
    T min, max;

public:
    IsInRange(T min, T max)
        : min{min}, max{max} {}

    bool operator()(T value) const
    {
        return (value >= min) && (value <= max);
    }
};

// Function Declaration
template <Number T>
void initializeRandomNumbers(std::vector<T>);

template <Number T, Number R>
T range_sum(std::vector<T>, R);

int main()
{
    using namespace std;

    getch();
    return 0;
}

template <Number T>
void initializeRandomNumbers(std::vector<T>)
{
}

template <Number T, Number R>
T range_sum(std::vector<T>, R)
{

    return T;
}
