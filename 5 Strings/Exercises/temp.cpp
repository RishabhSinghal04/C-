/* Abcd -> AbcdcbA
Lol -> Lol
awow -> awowa */

#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string wordTemp{}, rev1 = "", rev2 = "";

    cout << "Enter a word: ";
    cin >> wordTemp;

    string word{wordTemp};
    reverse(wordTemp.begin(), wordTemp.end());

    if (word == wordTemp)
    {
        cout << '\"' << wordTemp << "\" itself is palindrome";
        getch();
        return 0;
    }

    for (unsigned short i = 0; i < word.length(); ++i) // Loop until the length of the word
    {
        rev1 = word.at(i) + rev1; // Reversing
        rev2 = "";
        string newWord = word + rev1; // Concatenate the reverse of the word to form a new word

        //  Process to get the reverse
        for (unsigned short j = 0; j < newWord.length() - 1; ++j) // Loop until one less than the length of the new word
        {
            rev2 = newWord.at(j) + rev2; // Reversing
        }

        if (rev1.back() + rev2 == newWord)
        {
            cout << "Palindrome of \"" << word << "\" is \"" << word + rev1 << '\"';
            break;
        }
    }

    getch();
    return 0;
}