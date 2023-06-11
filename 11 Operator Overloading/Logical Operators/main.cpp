
#include <iostream>
#include <conio.h>
#include <utility>

#include "rectangle.h"
#include "integer.h"

int main()
{
    using namespace std;
    using namespace std::rel_ops;

    Rectangle rectangle1(10, 4);
    Rectangle rectangle2(10, 16);

    cout << "Rectangle 1:-\n Length : " << rectangle1.getLength()
         << "\tBreadth : " << rectangle1.getBreadth() << '\n';
    cout << "Rectangle 2:-\n Length : " << rectangle2.getLength()
         << "\tBreadth : " << rectangle2.getBreadth() << '\n';

    cout << boolalpha;
    cout << "rectangle 1 > rectangle 2 : " << (rectangle1 > rectangle2) << '\n';
    cout << "rectangle 1 >= rectangle 2 : " << (rectangle1 >= rectangle2) << '\n';
    cout << "rectangle 1 == rectangle 2 : " << (rectangle1 == rectangle2) << '\n';
    cout << "rectangle 1 != rectangle 2 : " << (rectangle1 != rectangle2) << '\n';
    cout << "rectangle 1 < rectangle 2 : " << (rectangle1 < rectangle2) << '\n';
    cout << "rectangle 1 <= rectangle 2 : " << (rectangle1 <= rectangle2) << '\n';

    cout << "10 == rectangle 1 : " << (10 == rectangle1) << '\n';
    cout << "rectangle 1 == 10 : " << (rectangle1 == 10) << '\n';

    Integer integer1;
    Integer integer2(10);

    cout << "integer1 > integer2 : " << (integer1 > integer2) << '\n';
    cout << "integer2 > integer1 : " << (integer2 > integer1) << '\n';

    getch();
    return 0;
}