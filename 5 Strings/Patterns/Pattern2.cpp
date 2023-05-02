
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
    const ushort WORDLENGTH = word.length();

    for (ushort i = 1; i <= WORDLENGTH; ++i)
    {
        ushort term = i;
        for (ushort j = 1; j <= WORDLENGTH; ++j)
        {
            if (term <= WORDLENGTH)
            {
                cout << word[term - 1] << ' ';
                ++term;
            }
            else
            {
                term = 1;
                cout << word[term - 1] << ' ';
                ++term;
            }
        }
        cout << '\n';
    }

    getch();
    return 0;
}