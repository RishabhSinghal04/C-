
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to display each word in a new line
 * @param sentence std::string
 */
void displayEachWord(string &sentence)
{
    string word{};
    const char *separators{",;\":()[]/\\<>$%^&*@#~`|"}, *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            cout << word << '\n';
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

    cout << "Each word in new line:-\n";
    displayEachWord(sentence);

    getch();
    return 0;
}