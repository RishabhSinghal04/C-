/*
 * A program to find the largest integer among 10 integers.
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned short counter = 0;
    int num, max_num;

    cout << "Enter a number: ";
    cin >> num;
    max_num = num;
    counter = 1;

    while (counter < 10)
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num > max_num)
        {
            max_num = num;
        }
        counter++;
    }
    cout << "The largest number is " << max_num;

    getch();
    return 0;
}