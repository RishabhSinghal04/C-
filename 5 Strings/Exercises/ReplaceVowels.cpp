
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

string replaceVowels(string &sentence, char &replaceWith)
{
    const char *vowels{"AEIOU"};
    for (auto &character : sentence)
    {
        if (strchr(vowels, toupper(character)))
        {
            character = replaceWith;
        }
    }
    return sentence;
}

int main()
{
    char replaceWith = '\0';
    string sentenceTemp{};

    cout << "Enter a sentence: ";
    getline(cin >> ws, sentenceTemp);

    cout << "Enter a character to replace each vowel : ";
    cin >> replaceWith;

    string sentence = extractSentence(sentenceTemp);

    if (!hasSentenceTerminated(sentence))
    {
        terminateSentence(sentence);
    }

    cout << "Sentence after replacing each vowel with character \"" << replaceWith << "\" is \"" << replaceVowels(sentence, replaceWith) << "\"\n";

    getch();
    return 0;
}