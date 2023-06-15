
#include <iostream>
#include <conio.h>
#include <utility>
#include <vector>

template <typename T>
void display_elements(const T &elements)
{
    if (elements.empty())
    {
        std::cout << "Empty";
        return;
    }

    char separator = ' ';

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

    pair<uint16_t, string> player_a{1, "Adam"};
    auto player_b = make_pair(2, "John");

    cout << "Player " << player_a.first << "\t Name : " << player_a.second << '\n';
    cout << "Player " << player_b.first << "\t Name : " << player_b.second << '\n';

    auto [uint16_t, string] = player_a;
    cout << "player( " << uint16_t << ", " << string << " )" << '\n';

    pair player_c(3, std::string("William"));
    cout << "Player " << player_c.first << "\t Name : " << player_c.second << '\n';

    vector<pair<std::uint16_t, std::string>> the_eight_planets{
        {1, "Mercury"},
        {2, "Venus"},
        {3, "Earth"},
        {4, "Mars"},
        {5, "Jupiter"},
        {6, "Saturn"},
        {7, "Uranus"},
        {8, "Neptune"}};

    display_elements(the_eight_planets);
    cout << '\n';

    display_elements_reverse_order(the_eight_planets);
    cout << '\n';

    getch();
    return 0;
}