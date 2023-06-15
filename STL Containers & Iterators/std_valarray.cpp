
#include <iostream>
#include <conio.h>
#include <iterator>
#include <valarray>

template <typename T>
void display_elements(const T &elements)
{
    if (elements.size() == 0ULL)
    {
        std::cout << "Empty";
        return;
    }

    auto element = std::begin(elements);

    std::cout << "[ " << *element;
    for (++element; element != std::end(elements); ++element)
    {
        std::cout << ", " << *element;
    }
    std::cout << " ]";
}

int main()
{
    using namespace std;

    const uint16_t NUM_OF_DASHES = 110U;

    const valarray<uint16_t> small_positive_integers{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    valarray<uint16_t> small_positive_integers_2;
    valarray<float> floating_points;
    valarray<float> floating_points_2{1.0, 9.0, 34.42, 657.25, 478.25, 870.9, 5472.487};

    display_elements(small_positive_integers);
    cout << '\n';
    display_elements(floating_points);
    cout << '\n';

    // Use apply() to increment all elements by 10
    cout << string(NUM_OF_DASHES, '-')
         << "\nUse apply() to increment all elements by 10:-\n";

    small_positive_integers_2 = small_positive_integers.apply([](uint16_t x)
                                                              { return x += 10; });
    display_elements(small_positive_integers);
    cout << '\n';
    display_elements(small_positive_integers_2);
    cout << '\n';

    // Display sum of arrays
    cout << string(NUM_OF_DASHES, '-')
         << "\nDisplay sum of arrays:-\n";

    cout << "Sum is " << small_positive_integers.sum() << '\n';
    cout << "Sum is " << small_positive_integers_2.sum() << '\n';

    // Find the smallest and the largest element
    cout << string(NUM_OF_DASHES, '-')
         << "\nFind the smallest and the largest element:-\n";

    cout << "Smallest element is " << small_positive_integers.min() << '\n';
    cout << "Largest element is " << small_positive_integers_2.max() << '\n';

    // Use shift() to shift elements left(+I) or right(-I)
    cout << string(NUM_OF_DASHES, '-')
         << "\nUse shift() to shift elements left(+I) or right(-I):-\n";

    display_elements(floating_points_2);
    cout << '\n';

    floating_points = floating_points_2.shift(2);
    display_elements(floating_points);
    cout << '\n';

    floating_points = floating_points_2.shift(-2);
    display_elements(floating_points);
    cout << '\n';

    // Use cshift() to circularly shift elements left(+I) or right(-I)
    cout << string(NUM_OF_DASHES, '-')
         << "\nUse cshift() to circularly shift elements left(+I) or right(-I):-\n";

    display_elements(small_positive_integers.cshift(2));
    cout << '\n';
    display_elements(small_positive_integers.cshift(-2));
    cout << '\n';

    // Use swap() to swap two arrays
    cout << string(NUM_OF_DASHES, '-')
         << "\nUse swap() to swap two arrays:-\n";

    valarray<int> integers_1{-1, 0, 2, 7, 9};
    valarray<int> integers_2{-2, 0, 1, 8, 10, 11};

    display_elements(integers_1);
    cout << '\n';
    display_elements(integers_2);
    cout << '\n';

    integers_1.swap(integers_2);
    cout << "\nAfter Swapping:-\n";

    display_elements(integers_1);
    cout << '\n';
    display_elements(integers_2);
    cout << '\n';

    cout << string(NUM_OF_DASHES, '-') << '\n';

    getch();
    return 0;
}