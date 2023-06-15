
#include <iostream>
#include <conio.h>
#include <deque>

template <typename T>
void display_elements(const T &elements)
{
    if (elements.empty())
    {
        std::cout << "Empty";
        return;
    }

    auto element = elements.begin();

    std::cout << "[ " << *element;
    for (++element; element != elements.end(); ++element)
    {
        std::cout << ", " << *element;
    }
    std::cout << " ]";
}

template <typename T>
void display_elements_reverse_order(const T &elements)
{
    if (elements.empty())
    {
        std::cout << "Empty";
        return;
    }

    auto element = elements.rbegin();

    std::cout << "[ " << *element;
    for (++element; element != elements.rend(); ++element)
    {
        std::cout << ", " << *element;
    }
    std::cout << " ]";
}

template <typename T>
void access_elements(const T &);

int main()
{
    using namespace std;

    const uint16_t NUM_OF_DASHES = 110U;

    deque<int> integers{1, 2, 3, 4, 5, 0, -4, -3, -2, -1};
    deque<int> integers_2{1, 2};

    display_elements(integers);
    cout << '\n';
    display_elements(integers_2);
    cout << '\n';

    cout << string(NUM_OF_DASHES, '-')
         << "\nAccess Elements:-\n";

    access_elements(integers);
    cout << '\n';
    access_elements(integers_2);
    cout << '\n';

    // Display elements in reverse order
    cout << string(NUM_OF_DASHES, '-')
         << "\nDisplay elements in reverse order:-\n";

    display_elements_reverse_order(integers);
    cout << '\n';
    display_elements_reverse_order(integers_2);
    cout << '\n';

    // Insert Element
    cout << string(NUM_OF_DASHES, '-')
         << "\nInsert Elements:-\n";

    auto insert_position = integers.begin() + 2;

    integers.insert(insert_position, 1102);
    integers.insert(insert_position, 1490);

    display_elements(integers);
    cout << '\n';

    // Emplace
    cout << string(NUM_OF_DASHES, '-')
         << "\nEmplace:-\n";

    integers.emplace(insert_position, 1000);
    display_elements(integers);
    cout << '\n';

    // Erase
    cout << string(NUM_OF_DASHES, '-')
         << "\nErase:-\n";

    integers.erase(integers.begin() + 4);
    display_elements(integers);
    cout << '\n';

    // Resize
    cout << string(NUM_OF_DASHES, '-')
         << "\nResize:-\n";

    integers.resize(10);
    display_elements(integers);
    cout << '\n';

    // Emplace Back and Emplace Front
    cout << string(NUM_OF_DASHES, '-')
         << "\nEmplace Back and Emplace Front:-\n";

    integers.emplace_back(1000);
    integers.emplace_front(-1000);
    display_elements(integers);
    cout << '\n';

    // Pop Front and Pop Back
    cout << string(NUM_OF_DASHES, '-')
         << "\nPop Front and Pop Back:-\n";

    integers.pop_back();
    integers.pop_front();
    display_elements(integers);
    cout << '\n';

    // Swap
    cout << string(NUM_OF_DASHES, '-')
         << "\nSwap:-\n";

    integers_2.swap(integers);
    display_elements(integers);
    display_elements(integers_2);
    cout << '\n';

    getch();
    return 0;
}

template <typename T>
void access_elements(const T &elements)
{
    if (elements.empty())
    {
        std::cout << "Empty";
        return;
    }

    try
    {
        std::cout << "front() : " << elements.front() << '\n';
        std::cout << "back() : " << elements.back() << '\n';

        if (elements.size() <= 4)
        {
            throw std::out_of_range("Size is less than or equal to 4");
        }

        std::cout << "[4] : " << elements[4] << '\n';
        std::cout << "at(4) : " << elements.at(4) << '\n';
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what();
    }
}
