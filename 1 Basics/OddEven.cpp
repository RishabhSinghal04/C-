
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned long long num;

    cout << "Enter a number: ";
    cin >> num;

    (num % 2 == 0) ? cout << num << " is an even number" : cout << num << " is an odd number";

    getch();
    return 0;
}