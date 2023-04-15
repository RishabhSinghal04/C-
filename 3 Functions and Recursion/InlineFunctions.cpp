
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
typedef unsigned long long ull;

inline double volumeOfCube(float);
inline ull sumOfSquareOfIntergers(int, int);

int main()
{
    unsigned short nCubes, countCubes = 1;
    int num1, num2;
    float sideOfCube;

    cout << "Enter total number of cubes: ";
    cin >> nCubes;

    while (countCubes <= nCubes)
    {
        cout << "\nEnter length of a side of cube "
             << countCubes << ": ";
        cin >> sideOfCube;

        cout << "Volume of cube of side " << sideOfCube << "units is " << volumeOfCube(sideOfCube);
        countCubes++;
    }

    cout << "\nEnter two integers: ";
    cin >> num1 >> num2;

    cout << "Sum of square of " << num1 << " and " << num2 << " is " << sumOfSquareOfIntergers(num1, num2);

    getch();
    return 0;
}

inline double volumeOfCube(float side)
{
    return pow(side, 3.0F);
}

inline ull sumOfSquareOfIntergers(int num1, int num2)
{
    return static_cast<ull>(pow(num1, 2.0) + pow(num2, 2.0));
}