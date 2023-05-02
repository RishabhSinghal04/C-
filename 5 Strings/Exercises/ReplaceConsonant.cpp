
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to replace each consonant with the previous letter.
 If the previous letter is a vowel then replace it with the next consonant.
 * @param sentence std::string
 * @return The new sentence formed after replacing consonants accordingly.
 */
string replaceConsonant(string &sentence)
{
    string newSentence = sentence;
    const char *vowels{"AEIOUaeiou"};

    for (auto &character : newSentence)
    {
        if (isalpha(character) && (!strchr(vowels, character))) // If a character is consonant
        {
            // If previous character is a vowel -> Increment by 1, else decrement by 1
            character = (strchr(vowels, character - 1))
                            ? static_cast<char>(character + 1)
                            : static_cast<char>(character - 1);
        }
    }
    return newSentence;
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

    cout << "The new sentence formed is \"" << replaceConsonant(sentence) << "\"";

    getch();
    return 0;
}