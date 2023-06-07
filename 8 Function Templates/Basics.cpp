
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/**
 * @brief To find maximum among two values
 * @tparam T
 * @param a
 * @param b
 * @return The greater of the parameters
 */
template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

/**
 * @brief To find minimum among two values
 * @tparam T
 * @param a
 * @param b
 * @return The smaller of the parameters
 */
template <typename T>
T minimum(T a, T b)
{
    return (a < b) ? a : b;
}

int main()
{
    const int integer1 = 10, integer2 = 50;
    const double realNum1 = 1352.252, realNum2 = 49756.34;
    string str1{"Hello World"}, str2{"Welcome"};

    cout << "\t Minimum \t Maximum\n";
    cout << "int : " << minimum(integer1, integer2) << '\t' << maximum(integer1, integer2) << '\n';
    cout << "double : " << minimum(realNum1, realNum2) << '\t' << maximum(realNum1, realNum2) << '\n';
    cout << "string : " << minimum(str1, str2) << '\t' << maximum(str1, str2) << '\n';

    auto result1 = maximum(integer1, integer2); // int type deduced
    auto result2 = maximum(realNum1, realNum2); // double type deduced
    auto result3 = maximum(str1, str2);         // string type deduced

    auto maxDouble = maximum<double>(integer1, realNum1);
    auto maxInteger = maximum<int>(realNum2, integer2);

    cout << maxDouble << '\n'
         << maxInteger << '\n';

    getch();
    return 0;
}