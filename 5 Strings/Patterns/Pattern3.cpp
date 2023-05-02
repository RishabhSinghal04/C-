
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string word{};

    cout << "Enter a word: ";
    cin >> word;

    using ushort = unsigned short;

    for (ushort i = 1; i <= word.length(); ++i)
    {
        for (ushort j = 1; j <= i; ++j)
        {
            cout << word[i - 1] << ' ';
        }
        cout << '\n';
    }

    getch();
    return 0;
}