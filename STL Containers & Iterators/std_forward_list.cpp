
#include <iostream>
#include <conio.h>
#include <forward_list>

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

int main()
{
    using namespace std;

    forward_list<int> integers{1, 2, 3, 4, 5, 0, -10, -22};
    forward_list<int> integers_2{-5, -10, 4, 5};
    forward_list<double> floating_points{1.2, 2.7, 3, 4.9, 5.5, -10.87, -22};

    auto display_dashes = [](const uint_fast16_t NUM_OF_DASHES)
    {
        std::cout << std::string(NUM_OF_DASHES, '-');
    };

    display_elements(integers);
    cout << '\n';

    display_elements(integers_2);
    cout << '\n';

    display_elements(floating_points);

    cout << '\n'
         << "front() : " << integers.front() << '\n';

    // Insert After
    display_dashes(110U);
    cout << "\nInsert After:-\n";

    auto insert_position = integers.before_begin();
    integers.insert_after(insert_position, 10);

    display_elements(integers);
    cout << '\n';

    // Emplace After
    display_dashes(110U);
    cout << "\nEmplace After:-\n";

    integers.emplace_after(insert_position, 110);
    display_elements(integers);
    cout << '\n';

    // Erase After
    display_dashes(110U);
    cout << "\nErase After:-\n";

    integers.erase_after(insert_position);
    display_elements(integers);
    cout << '\n';

    // Pop Front
    display_dashes(110U);
    cout << "\nPop Front:-\n";

    integers.pop_front();
    display_elements(integers);
    cout << '\n';

    // Resize
    display_dashes(110U);
    cout << "\nResize:-\n";

    integers.resize(5);
    display_elements(integers);
    cout << '\n';

    integers.resize(7);
    display_elements(integers);
    cout << '\n';

    // Merge
    display_dashes(110U);
    cout << "\nMerge:-\n";
    integers.merge(integers_2);

    display_elements(integers);
    cout << '\n';

    // splice_after() : moving a range of elements from one container to another
    display_dashes(110U);
    cout << "\nsplice_after() : moving a range of elements from one container to another:-\n";

    integers_2.splice_after(integers_2.before_begin(), integers_2, integers.begin(), integers.end());
    display_elements(integers_2);
    cout << '\n';

    // Remove
    display_dashes(110);
    cout << "\nRemove:-\n";

    integers_2.remove(2);
    display_elements(integers_2);
    cout << '\n';

    integers_2.remove(2);
    display_elements(integers_2);
    cout << '\n';

    // Reverse
    display_dashes(110U);
    cout << "\nReverse:-\n";

    floating_points.reverse();
    display_elements(floating_points);
    cout << '\n';

    // unique() : remove contiguous duplicates
    display_dashes(110U);
    cout << "\nunique() : remove contiguous duplicates:-\n";

    forward_list<double> floating_points_2{100.0, 100.0, 1.0, 2.0, 1.0, 75.7745, 75.7745, -1.1,-1.1};
    display_elements(floating_points_2);
    cout << '\n';

    floating_points_2.unique();
    display_elements(floating_points_2);
    cout << '\n';

    // Sort
    display_dashes(110U);
    cout << "\nSort:-\n";

    floating_points_2.sort();
    display_elements(floating_points_2);
    cout << '\n';

    getch();
    return 0;
}