/*
 * Special Words: Words that start and end with same letter.
 * Example : Window, Comic etc.
 */

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/**
 * @brief A function to check if a word is a special word or not
 * @param word std::string
 * @return Boolean Value
 */
inline bool isSpecialWord(string &word)
{
    return (toupper(word.front()) == toupper(word.back())) ? true : false;
}

int main()
{
    string word{};

    cout << "Enter a word: ";
    cin >> word;

    isSpecialWord(word)
        ? cout << '\"' << word << "\" is a special word\n"
        : cout << '\"' << word << "\" is not a special word\n";

    getch();
    return 0;
}