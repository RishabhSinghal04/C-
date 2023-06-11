/*
 * Weak Ordering and Partial Ordering
 */

#include <iostream>
#include <conio.h>

#include "compare_strings.h"

int main()
{
    using namespace std;

    ComparableString cmp_st1{"Bill"};
    ComparableString cmp_st2{"William"};

    cout << boolalpha;
    cout << "cmp_st1 > cmp_st2 : " << (cmp_st1 > cmp_st2) << '\n';
    cout << "cmp_st1 < cmp_st2 : " << (cmp_st1 < cmp_st2) << '\n';
    cout << "cmp_st1 == cmp_st2 : " << (cmp_st1 == cmp_st2) << '\n';

    ComparableString st1{"Hello"};
    ComparableString st2{"HELLO"};

    cout << "st1 == st2 : " << (st1 == st2) << '\n';
    cout << "st1 >= st2 : " << (st1 >= st2) << '\n';
    cout << "st1 <= st2 : " << (st1 <= st2) << '\n';
    cout << "st1 < st2 : " << (st1 < st2) << '\n';
    cout << "st1 > st2 : " << (st1 > st2) << '\n';

    getch();
    return 0;
}