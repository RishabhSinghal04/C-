/*
 WAP that prints charts showing:-
 The Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees.
 The Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees.
 */

#include <iostream>
#include <conio.h>
#include <iomanip>

#define WIDTH 3

using namespace std;

void FahrenheitEquivalentCelsius();
void CelsiusEquivalentFahrenheit();

inline float toCelsius(float);
inline float toFahrenheit(float);

int main()
{
    cout << "The Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees:-\n";
    FahrenheitEquivalentCelsius();

    cout << "\nThe Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees:-\n";
    CelsiusEquivalentFahrenheit();

    getch();
    return 0;
}

void FahrenheitEquivalentCelsius()
{
    cout << static_cast<char>(248) << 'C' << '\t' << static_cast<char>(248) << "F\n";
    for (size_t i = 0; i <= 100; ++i)
    {
        cout << setw(WIDTH) << i << '\t' << toFahrenheit(i) << '\n';
    }
}
void CelsiusEquivalentFahrenheit()
{
    cout << static_cast<char>(248) << 'F' << '\t' << static_cast<char>(248) << "C\n";
    for (size_t i = 32; i <= 212; ++i)
    {
        cout << setw(WIDTH) << i << '\t' << toCelsius(i) << '\n';
    }
}

inline float toCelsius(float temperatureInFahrenheit)
{
    return 0.5556F * (temperatureInFahrenheit - 32.0F);
}

inline float toFahrenheit(float temperatureInCelsius)
{
    return 1.8F * temperatureInCelsius + 32.0F;
}