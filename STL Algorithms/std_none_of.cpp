
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <vector>

bool is_odd(int num)
{
    return num % 2 != 0;
}

int main()
{
    using namespace std;

    vector<int> integers;
    integers.reserve(10);

    integers.emplace_back(12);
    integers.emplace_back(644);
    integers.emplace_back(-278);
    integers.emplace_back(10);

    none_of(begin(integers), end(integers), is_odd)
        ? cout << "None of the number is odd\n"
        : cout << "At least one number is odd\n";

    getch();
    return 0;
}