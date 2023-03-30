// Analysis of examination result

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned short passes{0}, failures{0}, studentCounter{0};

    while (studentCounter < 10)
    {
        unsigned short result;

        cout << "Enter result (1 -> Pass, 0 -> Fail) : ";
        cin >> result;

        if (result > 1)
        {
            cout << "\nRe-enter (Press '1' for pass and '0' for fail)\n";
        }
        else
        {
            (result == 1) ? passes++ : failures++;
            studentCounter++;
        }
    }

    cout << "Number of students passed = " << passes << '\n';
    cout << "Number of students failed = " << failures << '\n';

    getch();
    return 0;
}