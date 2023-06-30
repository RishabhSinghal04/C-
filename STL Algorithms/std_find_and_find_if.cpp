
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <vector>

int main()
{
    using namespace std;

    vector<int> integers{123, 23465, 7, 12634, -856, 37, -796, 3587, -5643657, 34756, 68769, 14236, 78900};

    const int num = 123;
    const int num_2 = 124;

    auto result = find(begin(integers), end(integers), num);

    (result != end(integers))
        ? cout << "Container contains " << num << '\n'
        : cout << "Container does not contain " << num << '\n';

    result = find(begin(integers), end(integers), num_2);

    (result != end(integers))
        ? cout << "Container contains " << num_2 << '\n'
        : cout << "Container does not contain " << num_2 << '\n';

    vector<uint16_t> whole_numbers{0, 1, 2, 3, 56, 978, 7, 356, 2, 8943, 7623, 68, 2769, 876, 4217};

    auto even = [](const uint16_t &num)
    {
        return num % 2 == 0;
    };

    auto even_num_position = find_if(begin(whole_numbers), end(whole_numbers), even);

    even_num_position != end(whole_numbers)
        ? cout << "Collection contains at least one even number, one is present at position "
               << *(even_num_position + 1) << '\n'
        : cout << "Collection does not contain any even number\n";

    getch();
    return 0;
}