
#include <iostream>
#include <conio.h>
#include <list>

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

int main()
{
    using namespace std;

    const uint16_t N = 110U;
    list<int> integers{-9, -6, -4, -2, 0, 1, 5, 7, 10, 14};
    list<int> integers_2{-22, -16, -14, -12, 10, 11, 15, 22};

    auto display_dashes = [](const uint_fast16_t NUM_OF_DASHES)
    {
        std::cout << std::string(NUM_OF_DASHES, '-');
    };

    display_elements(integers);
    cout << '\n';
    display_elements_reverse_order(integers);
    cout << '\n';

    display_elements(integers_2);
    cout << '\n';

    // Element Access
    display_dashes(N);
    cout << "\nElement Access:-\n";

    cout << "First element is " << integers.front()
         << "\nLast element is " << integers.back() << '\n';

    // Capacity
    display_dashes(N);
    cout << "\nCapacity:-\n";

    cout << "Max Size : " << integers.max_size()
         << "\nSize : " << integers.size() << '\n';

    // Insert
    display_dashes(N);
    cout << "\nInsert\n:-";

    auto insert_position = integers.begin();
    insert_position++;

    integers.insert(insert_position, 44);
    display_elements(integers);
    cout << '\n';

    // Emplace
    display_dashes(N);
    cout << "\nEmplace:-\n";

    integers.insert(insert_position, 45);
    display_elements(integers);
    cout << '\n';

    // Erase
    display_dashes(N);
    cout << "\nErase:-\n";

    integers.erase(--insert_position);
    display_elements(integers);
    cout << '\n';

    // Emplace Front and Emplace Back
    display_dashes(N);
    cout << "\nEmplace Front and Emplace Back:-\n";

    integers.emplace_front(-10);
    integers.emplace_back(110);
    display_elements(integers);
    cout << '\n';

    // Pop Front and Pop Back
    display_dashes(N);
    cout << "\nPop Front and Pop Back:-\n";

    integers.pop_front();
    integers.pop_back();
    display_elements(integers);
    cout << '\n';

    // Swap
    display_dashes(N);
    cout << "\nSwap:-\n";

    integers.swap(integers_2);

    display_elements(integers);
    cout << '\n';
    display_elements(integers_2);
    cout << '\n';

    // Merge
    display_dashes(N);
    cout << "\nMerge:-\n";

    integers.merge(integers_2);

    display_elements(integers);
    cout << '\n';
    display_elements(integers_2);
    cout << '\n';

    // splice() : move a range of elements from one collection to another
    display_dashes(N);
    cout << "\nsplice() : move a range of elements from one collection to another:-\n";

    integers_2.assign({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    display_elements(integers_2);
    cout << '\n';

    integers.splice(integers.begin(), integers, integers_2.begin(), --integers_2.end());

    display_elements(integers_2);
    cout << '\n';
    display_elements(integers);
    cout << '\n';

    // Remove
    display_dashes(N);
    cout << "\nRemove:-\n";

    integers.remove(-2);
    display_elements(integers);
    cout << '\n';

    integers.remove_if([](int n)
                       { return n > 10; });
    display_elements(integers);
    cout << '\n';

    // Reverse
    display_dashes(N);
    cout << "\nReverse:-\n";

    integers.reverse();

    display_elements(integers);
    cout << '\n';

    // Clear
    display_dashes(N);
    cout << "\nClear:-\n";

    integers.clear();
    display_elements(integers);
    cout << '\n';

    getch();
    return 0;
}