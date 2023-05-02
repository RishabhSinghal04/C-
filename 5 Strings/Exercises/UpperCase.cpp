
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

void InitialLetterUpper(string &sentence)
{
    string word{};
    const char *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            if (isupper(word.front()))
            {
                cout << word << '\n';
            }
            word = "";
        }
        else
        {
            word += character;
        }
    }
}

void LastLetterLower(string &sentence)
{
    string word{};
    const char *terminators{".?!"}, *separators{",;\":()[]/\\<>$%^&*@#~`|"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            if (isupper(word.back()))
            {
                cout << word << '\n';
            }
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

    cout << "Word(s) begining with upper case letter is/are:-\n";
    InitialLetterUpper(sentence);
    cout << '\n';

    cout << "Word(s) ending with upper case letter is/are:-\n";
    LastLetterLower(sentence);
    cout << '\n';

    getch();
    return 0;
}