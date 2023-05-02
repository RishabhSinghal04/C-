
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to get the word with maximum number of vowels.
 * @param sentence std::string
 * @return Word with maximum number of vowels.
 */
string maxVowelWord(string &sentence)
{
    // A lambda function to count vowels in a word
    auto vowelCount = [](string &st) -> unsigned short
    {
        unsigned short count = 0;
        const char *vowels{"AEIOU"};

        for (auto &ch : st)
        {
            if (strchr(vowels, toupper(ch)))
            {
                ++count;
            }
        }
        return count;
    }; // End of lambda function

    string word{}, maxVowelWord{};
    const char *separators{",;\":()[]/\\<>$%^&*@#~`|"}, *terminators{".?!"};
    unsigned short maxVowelCount = 0, countVowels = 0;

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            countVowels = vowelCount(word);
            if (countVowels > maxVowelCount)
            {
                maxVowelCount = countVowels;
                maxVowelWord = word;
            }
            word = "";
        }
        else if (!strchr(separators, character))
        {
            word += character;
        }
    }
    return maxVowelWord;
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

    cout << "Word with maximum number of vowels is \"" << maxVowelWord(sentence) << "\"\n";

    getch();
    return 0;
}