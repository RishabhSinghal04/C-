
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    const float pi = 3.141592F;
    float circumference = 2 * pi, radius;

    cout << "Enter radius of a circle: ";
    cin >> radius;
    circumference *= radius;
    cout << "Circumference of the circle is " << fixed << setprecision(2) << circumference << " units";

    getch();
    return 0;
}