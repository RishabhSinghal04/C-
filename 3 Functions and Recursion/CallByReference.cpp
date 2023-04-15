
#include <iostream>
#include <conio.h>

using namespace std;

void swapTwoIntegers(int &, int &);

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "First Integer is " << num1 << "\nSecond Integer is " << num2;

    swapTwoIntegers(num1, num2);

    cout << "\nAfter swapping:-\nFirst Interger is " << num1 << "\nSecond Integer is " << num2;

    getch();
    return 0;
}

void swapTwoIntegers(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}