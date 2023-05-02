
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to count the frequency of each vowel in a sentence.
 * @param sentence std::string
 * @param countEachVowel an array of vowels (size = 5)
 * @return Frequency of each vowel
 */
unsigned int *eachVowelFrequency(string &sentence, unsigned int countEachVowel[])
{
    for (auto &character : sentence)
    {
        if (toupper(character) == 'A')
        {
            ++countEachVowel[0];
        }
        else if (toupper(character) == 'E')
        {
            ++countEachVowel[1];
        }
        else if (toupper(character) == 'I')
        {
            ++countEachVowel[2];
        }
        else if (toupper(character) == 'O')
        {
            ++countEachVowel[3];
        }
        else if (toupper(character) == 'U')
        {
            ++countEachVowel[4];
        }
    }
    return &countEachVowel[0];
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

    unsigned int countEachVowel[5] = {0};
    const char *vowels{"AEIOU"};
    eachVowelFrequency(sentence, countEachVowel);

    for (unsigned short index = 0; index < 5; ++index)
    {
        cout << "Frequency of " << vowels[index] << " is " << countEachVowel[index] << '\n';
    }

    getch();
    return 0;
}