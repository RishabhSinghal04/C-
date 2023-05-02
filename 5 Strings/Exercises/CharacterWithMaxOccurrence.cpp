
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

unsigned char charcterWithMaxOccurrence(string &sentence)
{
    unsigned char maxOccurrenceCharacter = '\0';
    unsigned int characterFrequency[256U] = {0};
    unsigned int maxFrequency = 0U;

    for (auto &character : sentence)
    {
        ++characterFrequency[character];
        if (characterFrequency[character] > maxFrequency)
        {
            maxFrequency = characterFrequency[character];
            maxOccurrenceCharacter = character;
        }
    }
    return maxOccurrenceCharacter;
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

    cout << "Character with maximum occurrence is \"" << charcterWithMaxOccurrence(sentence) << "\"\n";

    getch();
    return 0;
}