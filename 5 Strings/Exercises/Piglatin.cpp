
#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>

using namespace std;

string PiglatinWord(string &word)
{
    const char *vowels{"aeiou"};
    unsigned short index = 0;

    while (index < word.length())
    {
        if (strchr(vowels, tolower(word[index])))
        {
            break;
        }
        ++index;
    }
    return word.substr(index) + word.substr(0, index) + "ay";
}

int main()
{
    string word{};

    cout << "Enter a word: ";
    cin >> word;

    cout << "Piglatin of \"" << word << "\" is \"" << PiglatinWord(word) << '\"';

    getch();
    return 0;
}