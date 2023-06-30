
#include <iostream>
#include <conio.h>

#include <algorithm>
#include <ranges>

int main()
{
    using namespace std;
    
    auto a = views::iota(1, 5);
    
    for(auto i : a)
    {
        cout << i << '\n';
    }

    for(auto i : views::iota(1, 10))
    {
        cout << i << '\n';
    }

    for(auto i : views::iota(1) | views::take(10))
    {
        cout << i << '\n';
    }

    getch();
    return 0;
}