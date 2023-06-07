
#include <iostream>
#include <conio.h>
#include <random>
#include <type_traits>

using namespace std;

/**
 * @brief Function to assign array with random numbers
 * @tparam P
 * @param arr An array of arbitrary type
 * @param SIZE size of array
 */
template <typename P>
void fillArrayWithRandomNumbers(P arr[], size_t SIZE)
{
    random_device rd;

    if constexpr (is_integral_v<P>)
    {
        uniform_int_distribution<P> dist(-1000, 1000);
        for (size_t index = 0; index < SIZE; ++index)
        {
            arr[index] = dist(rd);
        }
    }
    else // floating point
    {
        uniform_real_distribution<P> dist(-1000.0, 1000.0);
        for (size_t index = 0; index < SIZE; ++index)
        {
            arr[index] = dist(rd);
        }
    }
}

template <typename P>
void displayArrayElements(P arr[], size_t SIZE)
{
    cout << "[ " << arr[0];
    for (size_t index = 1; index < SIZE; ++index)
    {
        cout << ", " << arr[index];
    }
    cout << " ]";
}

int main()
{
    size_t SIZE = 0;

    cout << "Enter number of elements: ";
    cin >> SIZE;

    int integers[SIZE];
    fillArrayWithRandomNumbers(integers, SIZE);
    displayArrayElements(integers, SIZE);
    cout << '\n';

    SIZE = 0;
    cout << "Enter number of elements: ";
    cin >> SIZE;

    double real_numbers[SIZE];
    fillArrayWithRandomNumbers(real_numbers, SIZE);
    cout << fixed;
    displayArrayElements(real_numbers, SIZE);
    cout << '\n';

    getch();
    return 0;
}