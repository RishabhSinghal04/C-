
#include <iostream>
#include <conio.h>

using namespace std;

constexpr float PI = 3.14159;

constexpr float Degree_Radian(const float);
constexpr float Radian_Degree(const float);

int main()
{
    cout << "90" << char(248) << " in radians is " << Degree_Radian(90.0F) << '\n';
    cout << "1.5708 in radians is " << Radian_Degree(1.5708) << '\n';

    getch();
    return 0;
}

constexpr float Degree_Radian(const float angle)
{
    return angle * PI / 180.0F;
}

constexpr float Radian_Degree(const float angle)
{
    return angle * 180 / PI;
}
