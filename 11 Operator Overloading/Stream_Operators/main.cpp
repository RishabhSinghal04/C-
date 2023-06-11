
#include <conio.h>

#include "point.h"

int main()
{
    using namespace std;

    Point point1(10, 40);
    cout << point1 << '\n';

    Point point2(5, 10);
    point2 << cout;

    Point input_points;
    cin >> input_points;

    input_points << cout;

    getch();
    return 0;
}