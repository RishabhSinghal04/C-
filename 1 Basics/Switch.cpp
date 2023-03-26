
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned short choice;

    cout << "Press '1' for Monday\n";
    cout << "Press '2' for Tuesday\n";
    cout << "Press '3' for Wednesday\n";
    cout << "Press '4' for Thursday\n";
    cout << "Press '5' for Friday\n";
    cout << "Press '6' for Saturday\n";
    cout << "Press '7' for Sunday\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Today is Monday";
        break;
    case 2:
        cout << "Today is Tuesday";
        break;
    case 3:
        cout << "Today is Wednesday";
        break;
    case 4:
        cout << "Today is Thursday";
        break;
    case 5:
        cout << "Today is Friday";
        break;
    case 6:
        cout << "Today is Saturday";
        break;
    case 7:
        cout << "Today is Sunday";
        break;

    default:
        cout << "INVALID";
        break;
    }

    cout << '\n';

    // Declaring and initializing variable in switch clause only
    switch (int n = 1)
    {
    case 0:
        cout << "n = 0";
        break;
    case 1:
        cout << "n > 0";
        break;
    case -1:
        cout << "n < 0";
        break;

    default:
        cout << "Need only -1, 0 and 1";
        break;
    }

    getch();
    return 0;
}