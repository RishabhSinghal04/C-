
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned int n;

    cout << "Enter a number: ";
    if (cin >> n; n < 10)
    {
        cout << "Single digit number\n";
    }
    else
    {
        cout << "Multidigit Number\n";
    }

    if(char ch = 'y'; ch == 'y')
    {
        cout << "Answer is " << ch << "(yes)\n";
    }
    else if(ch == 'n')
    {
        cout << "Answer is " << ch << "(no)\n";
    }

    getch();
    return 0;
}