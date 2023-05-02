
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to display first letter of each word in a new line.
 * @param sentence std::string
 */
void displayFirstLetters(string &sentence)
{
    string word{};
    const char *separators{",;\":()[]/\\<>$%^&*@#~`|"}, *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            cout << word[0] << '\n';
            word = "";
        }
        else if (!strchr(separators, character))
        {
            word += character;
        }
    }
}

/**
 * @brief A function to display last letter of each word in a new line.
 * @param sentence std::string
 */
void displayLastLetters(string &sentence)
{
    string word{};
    const char *separators{",;\":()[]/\\<>$%^&*@#~`|"}, *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            cout << word[word.length() - 1] << '\n';
            word = "";
        }
        else if (!strchr(separators, character))
        {
            word += character;
        }
    }
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

    cout << "First letter of each word in new line is:-\n";
    displayFirstLetters(sentence);
    cout << '\n';

    cout << "Last letter of each word in new line is:-\n";
    displayLastLetters(sentence);
    cout << '\n';

    getch();
    return 0;
}