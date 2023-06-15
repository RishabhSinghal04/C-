
#include <iostream>
#include <conio.h>
#include <functional>
#include <map>
#include <utility>

template <typename T>
void display_elements(const T &elements)
{
    if (elements.empty())
    {
        std::cout << "Empty";
        return;
    }

    char separator = '\0';

    std::cout << '{';
    for (const auto &element : elements)
    {
        std::cout << std::exchange(separator, ',')
                  << "\n\t [ " << element.first << " : " << element.second << " ]";
    }
    std::cout << "\n}";
}

template <typename T>
void display_elements_reverse_order(const T &elements)
{
    if (elements.empty())
    {
        std::cout << "Empty";
        return;
    }

    char separator = '\0';

    std::cout << '{';
    for (auto element = elements.rbegin(); element != elements.rend(); ++element)
    {
        std::cout << std::exchange(separator, ',')
                  << "\n\t [ " << element->first << " : " << element->second << " ]";
    }
    std::cout << "\n}";
}

int main()
{
    using namespace std;

    map<uint16_t, string> the_eight_planets{
        {1, "Mercury"},
        {2, "Venus"},
        {3, "Earth"},
        {4, "Mars"},
        {5, "Jupiter"},
        {6, "Saturn"},
        {7, "Uranus"},
        {8, "Neptune"},
        {8, "Planet 9"}};

    map<uint16_t, int> numbers{
        {1, -1},
        {2, -2},
        {3, -3},
        {4, -4}};

    const uint16_t NUM_OF_DASHES = 110U;
    auto display_dashes = [&NUM_OF_DASHES]()
    {
        cout << string(NUM_OF_DASHES, '-');
    };

    display_elements(the_eight_planets);
    cout << '\n';

    display_elements_reverse_order(the_eight_planets);
    cout << '\n';

    display_dashes();
    cout << '\n';

    display_elements(numbers);
    cout << '\n';

    // Modify Values
    display_dashes();
    cout << "\nModify Values:-\n";

    for (auto it_modify = numbers.begin(); it_modify != numbers.end(); ++it_modify)
    {
        numbers.at(it_modify->first) = -1000;
    }

    display_elements(numbers);
    cout << '\n';

    // Capacity
    display_dashes();
    cout << "\nCapacity:-\n";

    cout << "max size : " << numbers.max_size() << '\n';
    cout << "max size : " << the_eight_planets.max_size() << '\n';
    cout << "size : " << numbers.size() << '\n';
    cout << "size : " << the_eight_planets.size() << '\n';

    // Insert
    display_dashes();
    cout << "\nInsert:-\n";

    auto result = numbers.insert({1, 200});

    (result.second)
        ? cout << "Insertion Successful\n"
        : cout << "Cannot Insert [Duplicate Key]\n";

    display_elements(numbers);
    cout << '\n';

    result = numbers.insert({5, 200});

    (result.second)
        ? cout << "Insertion Successful\n"
        : cout << "Cannot Insert [Duplicate Key]\n";

    display_elements(numbers);
    cout << '\n';

    // Emplace
    display_dashes();
    cout << "\nEmplace:-\n";

    result = numbers.emplace(make_pair(5, 1000));

    (result.second)
        ? cout << "Insertion Successful\n"
        : cout << "Cannot Insert [Duplicate Key]\n";

    display_elements(numbers);
    cout << '\n';

    result = numbers.emplace(make_pair(6, -90));

    (result.second)
        ? cout << "Insertion Successful\n"
        : cout << "Cannot Insert [Duplicate Key]\n";

    display_elements(numbers);
    cout << '\n';

    // Erase
    display_dashes();
    cout << "\nErase:-\n";

    auto it_erase = numbers.find(6);

    if (it_erase != numbers.end())
    {
        cout << "Found element with key " << it_erase->first
             << " and its value is " << it_erase->second << '\n';

        cout << "Erasing....\n";
        numbers.erase(it_erase);
        cout << "Erased\n";
    }
    else
    {
        cout << "Cannot find element with key " << it_erase->first << '\n';
    }

    display_elements(numbers);
    cout << '\n';

    // Changing Key Comparators
    display_dashes();
    cout << "\nChanging Key Comparators:-\n";

    map<int, int, less<int>> numbers_2{
        {1, 10},
        {2, 20},
        {4, 40},
        {5, 50},
        {3, 30}};

    display_elements(numbers_2);
    cout << '\n';

    map<double, double, std::function<bool(double, double)>> floating_points(
        [](double left, double right)
        {
            return left > right;
        }); // Lambda Function

    floating_points.insert({{1.5, 10.4},
                            {2.5, 20.4},
                            {4.5, 40.4},
                            {5.5, 50.4},
                            {3.5, 30.4}});

    display_elements(floating_points);
    cout << '\n';

    // Clear
    display_dashes();
    cout << "\nClear:-\n";

    the_eight_planets.clear();
    numbers.clear();

    display_elements(the_eight_planets);
    cout << '\n';
    display_elements(numbers);
    cout << '\n';

    getch();
    return 0;
}