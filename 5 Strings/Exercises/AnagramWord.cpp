
#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>

using namespace std;

bool isAnagramWord(string &word1, string &word2)
{
    if (word1.length() != word2.length())
    {
        return false;
    }

    const char *wordTemp = word2.c_str();
    
    for (auto &character : word1)
    {

        if (!strchr(wordTemp, character))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string word1{}, word2{};

    cout << "Enter a word: ";
    cin >> word1;
    cout << "Enter another word: ";
    cin >> word2;

    isAnagramWord(word1, word2)
        ? cout << '\"' << word1 << "\" and \"" << word2 << "\" are anagram words"
        : cout << '\"' << word1 << "\" and \"" << word2 << "\" are not anagram words";

    getch();
    return 0;
}