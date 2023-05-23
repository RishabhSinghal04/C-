
#include <iostream>
#include <conio.h>

using namespace std;

long long &max(long long &, long long &);

int main()
{
    long long num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    long long &maxNumber = max(num1, num2);

    cout << "Maximum among " << num1 << " and " << num2 << " is " << maxNumber;

    ++maxNumber;
    cout << '\n'
         << num1 << '\n'
         << num2 << '\n'
         << maxNumber;

    getch();
    return 0;
}

long long &max(long long &num1, long long &num2)
{
    return (num1 > num2) ? num1 : num2;
}