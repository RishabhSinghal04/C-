// Named template parameters for lambdas

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    auto max_num = []<typename P1, typename P2>(P1 a, P2 b)
    {
        return (a > b) ? a : b;
    };

    const int n = 376457;
    const double m = 325346901.472897690;

    cout << max_num(n, m) << '\n';

    getch();
    return 0;
}