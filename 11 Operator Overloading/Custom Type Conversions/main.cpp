
#include <conio.h>
#include "point.h"
#include "number.h"

double sum(double a, double b)
{
    return a + b;
}

void use_point(const Point &point)
{
    std::cout << "Printing the point from use_point function : ";
    point << std::cout << '\n';
}

int main()
{
    Number n1(22);
    Number n2(10);

    double result = sum(static_cast<double>(n1), static_cast<double>(n2));

    std::cout << "result : " << result << std::endl;

    use_point(static_cast<Point>(n1));

    Point point(static_cast<double>(n1), static_cast<double>(n2));
    std::cout << " x : " << point.getX() << ", y : " << point.getY() << '\n';

    getch();
    return 0;
}