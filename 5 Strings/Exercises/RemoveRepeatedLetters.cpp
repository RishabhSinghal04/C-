
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/**
 * @brief A function to remove all repeated letters in a word
 * @param word std::string
 * @return The new word formed.
 */
string removeRepeatedLetters(string &word)
{
    unsigned short frequency = 0;
    string newWord{};

    for (auto &character1 : word)
    {
        frequency = 0;
        for (auto character2 : newWord)
        {
            if (character1 == character2)
            {
                ++frequency;
            }
        }
        if (frequency == 0)
        {
            newWord += character1;
        }
    }
    return newWord;
}

int main()
{
    string word{};

    cout << "Enter a word: ";
    cin >> word;

    cout << "Word after removing all repeated letters is \"" << removeRepeatedLetters(word) << "\"";

    getch();
    return 0;
}