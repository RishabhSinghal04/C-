
#include <iostream>
#include <conio.h>

using namespace std;

/**
 * @brief A function template to get maximum among two values
 * @tparam RT return type
 * @tparam P1 1st parameter
 * @tparam P2 2nd parameter
 * @param a A thing of arbitrary type
 * @param b Another thing of arbitrary type
 * @return need to specify (explicit template argument)
 */
template <typename RT, typename P1, typename P2>
RT maximum(P1 a, P2 b)
{
    return (a > b) ? a : b;
}

int main()
{
    const int num1 = 426, num2 = 8902;
    const double num3 = 03489.347, num4 = 348979.3547;
    const char c1 = 'T', c2 = 'Y';

    int max1 = maximum<int, int, int>(num1, num2);
    int max2 = maximum<int, char, int>(c1, num2);
    char max3 = maximum<char>(c1, c2);
    double max4 = maximum<double>(num1, num4);

    cout << max1 << '\n'
         << max2 << '\n'
         << max3 << '\n'
         << max4 << '\n';

    getch();
    return 0;
}