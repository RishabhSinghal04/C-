
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/**
 * @brief A function to replace a character with another character
 * @param std::string
 * @param char character to be replaced
 * @param char character to replace
 * @return Modified string after replacing the character if found else no change
 */
string replaceCharacter(string &, char, char);

int main()
{
    char character = '\0', replaceWith = '\0';
    string st{};

    cout << "Enter a string: ";
    getline(cin >> ws, st);

    cout << "Enter a character to be replaced: ";
    cin >> character;

    cout << "Enter a character to replace the above character: ";
    cin >> replaceWith;

    cout << "After replacing character : " << replaceCharacter(st, character, replaceWith);

    getch();
    return 0;
}

string replaceCharacter(string &st, char ch, char replaceWith)
{
    for (auto &character : st)
    {
        if (character == ch)
        {
            character = replaceWith;
        }
    }
    return st;
}