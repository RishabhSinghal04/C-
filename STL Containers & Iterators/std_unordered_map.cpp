
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

    unordered_map<uint16_t, string> the_eight_planets{
        {1, "Mercury"},
        {2, "Venus"},
        {3, "Earth"},
        {5, "Jupiter"},
        {4, "Mars"},
        {7, "Uranus"},
        {8, "Neptune"},
        {6, "Saturn"},
        {8, "Planet 9"}};

    unordered_map<uint16_t, int> numbers{
        {1, -1},
        {3, -3},
        {2, -2},
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

    // Bucket Functions
    display_dashes();
    cout << "\nbucket : " << the_eight_planets.bucket(7) << '\n';
    cout << "bucket_count : " << numbers.bucket_count() << '\n';
    cout << "bucket_size : " << numbers.bucket_size(5) << '\n';
    cout << "max_bucket_count : " << numbers.max_bucket_count() << '\n';

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