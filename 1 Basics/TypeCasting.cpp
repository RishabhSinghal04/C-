
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numInt;
    float num;

    cout << "Enter a floating point number: ";
    cin >> num;

    numInt = static_cast<int>(num);
    cout << fixed << num << " in integer(after explicit type casting) is " << numInt << '\n';

    num = 0;
    cout << "Enter another floating point number: ";
    cin >> num;

    numInt = num;
    cout << num << " in integer(after implicit type conversion) is " << numInt;

    getch();
    return 0;
}