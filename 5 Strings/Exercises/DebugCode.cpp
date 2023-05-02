
#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>
#include "sentence.h"

using namespace std;

string LowerCase(string &);

/**
 * @brief A function to get the frequency of a word in a sentence
 * @param  std::string
 * @param  std::string
 * @return Frequency of a word in a sentence if present else zero
 */
unsigned int frequencyOfWord(string &, string &);

int main()
{
    string sentence{}, searchWord{};

    cout << "Enter a sentence: ";
    getline(cin >> ws, sentence);

    extractSentence(sentence);

    if (!hasSentenceTerminated(sentence))
    {
        terminateSentence(sentence);
    }

    cout << "Enter a word to be searched in the sentence: ";
    cin >> searchWord;

    cout << "Frequency of the word \"" << searchWord << "\" in the sentence is " << frequencyOfWord(sentence, searchWord);

    getch();
    return 0;
}

string LowerCase(string &word)
{
    string wordTemp = word;

    for (auto &character : wordTemp)
    {
        character = tolower(character);
    }
    return wordTemp;
}

unsigned int frequencyOfWord(string &sentence, string &searchWord)
{
    string word{};
    string searchWordTemp = LowerCase(searchWord);

    unsigned int frequencyCount = 0;
    const char *separators{",;\":()[]/\\<>$%^&*@#~`|"}, *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            if (word == searchWordTemp)
            {
                ++frequencyCount;
            }
            word = "";
        }
        else if (!strchr(separators, character))
        {
            word += tolower(character);
        }
    }
    return frequencyCount;
}