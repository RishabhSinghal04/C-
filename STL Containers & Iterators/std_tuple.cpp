
#include <iostream>
#include <conio.h>
#include <string>
#include <typeinfo>
#include <tuple>

int main()
{
    using namespace std;

    tuple<uint16_t, string, char> performance;
    performance = make_tuple(1, "Adam", 'B');

    tuple<int, char, string, double> temp{-1, 'A', "Name", 08942.1364576};
    tuple<int, char, string, double> temp_2(11, 'B', "_Name_", 08942.1364577);

    cout << fixed;

    cout << "Initial Values of tuple are:-\n"
         << get<0>(performance) << '\t'
         << get<1>(performance) << '\t'
         << get<2>(performance) << '\n';

    cout << "Initial Values of tuple are:-\n"
         << get<0>(temp) << '\t'
         << get<1>(temp) << '\t'
         << get<2>(temp) << '\t'
         << get<3>(temp) << '\n';

    cout << "Initial Values of tuple are:-\n"
         << get<0>(temp_2) << '\t'
         << get<1>(temp_2) << '\t'
         << get<2>(temp_2) << '\t'
         << get<3>(temp_2) << '\n';

    cout << "Size of tuple \"performance\" is " << tuple_size<decltype(performance)>::value << '\n';
    cout << "Size of tuple \"temp\" is " << tuple_size<decltype(temp)>::value << '\n';
    cout << "Size of tuple \"temp_2\" is " << tuple_size<decltype(temp_2)>::value << '\n';

    // _Swap_
    temp.swap(temp_2);
    // temp_2.swap(temp_3); // Syntax Error

    cout << "Values of tuple are:-\n"
         << get<0>(temp) << '\t'
         << get<1>(temp) << '\t'
         << get<2>(temp) << '\t'
         << get<3>(temp) << '\n';

    cout << "Values of tuple are:-\n"
         << get<0>(temp_2) << '\t'
         << get<1>(temp_2) << '\t'
         << get<2>(temp_2) << '\t'
         << get<3>(temp_2) << '\n';

    // tie() : Unpack the values of tuple into separate variables;
    int integer = 0;
    double floating_point_num = 0.0;
    char character = '\0';
    string st{};

    tie(integer, character, st, floating_point_num) = temp;

    cout << "integer : " << integer
         << "\tfloating_point_num : " << floating_point_num
         << "\tcharacter : " << character
         << "\tst : " << st << '\n';

    tie(ignore, ignore, st, floating_point_num) = temp_2;

    cout << "integer : " << integer
         << "\tfloating_point_num : " << floating_point_num
         << "\tcharacter : " << character
         << "\tst : " << st << '\n';

    // tuple_cat() : Concatenates two tuples and return a new tuple
    auto new_tuple = tuple_cat(performance, temp);

    cout << tuple_size<decltype(new_tuple)>::value << '\n';
    cout << typeid(tuple_element<0, decltype(temp)>::type).name() << '\n';

    cout << "Values of tuple are:-\n"
         << get<0>(new_tuple) << '\n'
         << get<1>(new_tuple) << '\n'
         << get<2>(new_tuple) << '\n'
         << get<3>(new_tuple) << '\n'
         << get<4>(new_tuple) << '\n'
         << get<5>(new_tuple) << '\n'
         << get<6>(new_tuple) << '\n';

    getch();
    return 0;
}