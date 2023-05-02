
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to get the largest word present in a sentence
 * @param sentence std::string
 * @return The largest word
 */
string LargestWord(string &sentence)
{
    string word{}, maxWord{};
    const char *separators{",;\":()[]/\\<>$%^&*@#~`|"}, *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            if (word.length() > maxWord.length())
            {
                maxWord = word;
            }
            word = "";
        }
        else if (!strchr(separators, character))
        {
            word += character;
        }
    }
    return maxWord;
}

int main()
{
    string sentenceTemp{};

    cout << "Enter a sentence: ";
    getline(cin >> ws, sentenceTemp);

    string sentence = extractSentence(sentenceTemp);

    if (!hasSentenceTerminated(sentence))
    {
        terminateSentence(sentence);
    }

    cout << "The largest word is \"" << LargestWord(sentence) << '\"';

    getch();
    return 0;
}