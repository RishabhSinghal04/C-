
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned int naturalNumbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /* Fail
    // Modification attempt
    for (auto number : naturalNumbers)
    {
        number *= 10; // Modifies copy of value in naturalNumbers
    }

    // Print values
    for (auto number : naturalNumbers)
    {
        cout << number << "  ";
    } */

    // Modification attempt using reference
    for (auto &number : naturalNumbers)
    {
        number *= 10; // Modifies value in naturalNumbers
    }

    // Print values
    for (auto number : naturalNumbers)
    {
        cout << number << "  ";
    }

    getch();
    return 0;
}