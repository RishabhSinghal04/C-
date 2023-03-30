/*
 * A program to input radius of a circle.
 * Calculate and print diameter, circumference and area of circle.
 * pi = 3.14159
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const float pi = 3.14159F;
    float radius;
    double diameter = 0.0, circumference = 0.0;
    long double area = 0.0L;

    cout << "Enter radius of circle: ";
    cin >> radius;

    if (radius > __FLT_MAX__)
    {
        cerr << "Overflow";
    }
    else if (radius <= 0)
    {
       radius == 0 ? cout << "Radius must be greater than zero" : cout << "Radius cannot be negative";
    }
    else
    {
        // Calculating given parameters
        diameter = 2.0 * static_cast<double>(radius);
        circumference = diameter * static_cast<double>(pi);
        area = static_cast<long double>(pi) * (static_cast<long double>(radius) * static_cast<long double>(radius));

        cout << "Circle of radius " << fixed << radius << " units has:-\n";
        cout << "Diameter = " << diameter << " units" << '\n';
        cout << "Circumference = " << circumference << " units" << '\n';
        cout << "Area = " << area << " units" << '\n';
    }

    getch();
    return 0;
}