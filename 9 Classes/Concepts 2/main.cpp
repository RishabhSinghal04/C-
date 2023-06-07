
#include <iostream>
#include <conio.h>
#include "square.h"

bool compare(const Square &square1, const Square &square2)
{
    return (square1.area() > square2.area()) ? true : false << '\n';
}

int main()
{
    using namespace std;

    Square s1(54.79F), s2(74.21F);

    cout << boolalpha;
    cout << "s1 > s2 : " << compare(s1, s2) << '\n';

    // Implicit Conversion
    // cout << "s1 > 50.67 : " << compare(s1, 50.67F) << '\n';

    // Explicit Conversion
    cout << "s1 > 50.67 : " << compare(s1, static_cast<Square>(50.67F)) << '\n';

    Square s3(10.00F, "greenish blue", 90, 0.0F);
    cout << s3.getSide();

    getch();
    return 0;
}