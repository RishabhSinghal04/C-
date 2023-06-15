
#include <iostream>
#include <conio.h>
#include <functional>
#include <unordered_map>
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

int main()
{
    using namespace std;

    unordered_multimap<uint16_t, string> the_eight_planets{
        {2, "Venus"},
        {1, "Mercury"},
        {3, "Earth"},
        {5, "Jupiter"},
        {4, "Mars"},
        {8, "Neptune"},
        {7, "Uranus"},
        {6, "Saturn"},
        {8, "Neptune"}};

    unordered_multimap<uint16_t, int> numbers{
        {2, -2},
        {3, -3},
        {1, -1},
        {4, -4}};

    const uint16_t NUM_OF_DASHES = 110U;
    auto display_dashes = [&NUM_OF_DASHES]()
    {
        cout << string(NUM_OF_DASHES, '-');
    };

    display_elements(the_eight_planets);
    cout << '\n';

    display_dashes();
    cout << '\n';

    display_elements(numbers);
    cout << '\n';

    // Modify Values
    display_dashes();
    cout << "\nModify Values:-\n";

    for (auto &it_modify : numbers)
    {
        it_modify.second = -1000;
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

    numbers.insert({1, 200});

    display_elements(numbers);
    cout << '\n';

    numbers.insert({5, 1000});

    display_elements(numbers);
    cout << '\n';

    // Emplace
    display_dashes();
    cout << "\nEmplace:-\n";

    numbers.emplace(make_pair(5, 1000));

    display_elements(numbers);
    cout << '\n';

    numbers.emplace(make_pair(6, -90));

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