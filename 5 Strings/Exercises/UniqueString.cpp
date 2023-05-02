
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

bool isUnique(string &word)
{
    for (unsigned short i = 0; i < word.length() - 1; ++i)
    {
        for (unsigned short j = i + 1; j < word.length(); ++j)
        {
            if (toupper(word[i]) == toupper(word[j]))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    string word{};

    cout << "Enter a word: ";
    cin >> word;

    isUnique(word)
        ? cout << '\"' << word << "\" is a unique word\n"
        : cout << '\"' << word << "\" is not a unique word\n";

    getch();
    return 0;
}