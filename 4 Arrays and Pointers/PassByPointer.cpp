
#include <iostream>
#include <conio.h>

using namespace std;

void incrementInteger(int *);

int main()
{
    int num = 1000;

    cout << num << '\n';
    incrementInteger(&num);
    cout << num << '\n';

    getch();
    return 0;
}

void incrementInteger(int *integer)
{
    ++(*integer);
    cout << *integer << '\n';
}