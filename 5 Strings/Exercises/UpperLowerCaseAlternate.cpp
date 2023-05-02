
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to convert every alternate letter to uppercase and the next immediate letter to lowercase.
 * @param sentence std::string
 * @return Modified Sentence
 */
string ConvertLettersAlternatively(string &sentence)
{
    unsigned int alphaCount = 0U;

    for (auto &character : sentence)
    {
        if (isalpha(character))
        {
            ++alphaCount;
            character = (alphaCount % 2 == 1) ? toupper(character) : tolower(character);
        }
    }
    return sentence;
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

    cout << "Sentence after converting every alternate letter to uppercase and the next immediate letter to lowercase is:-\n";
    cout << "\"" << ConvertLettersAlternatively(sentence) << "\"\n";

    getch();
    return 0;
}