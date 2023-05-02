
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to display word(s) with consecutive letters
 * @param sentence std::string
 */
void displayWordsWithConsecutiveLetters(string &sentence)
{
    // A lambda function to check if a word has consecutive letters or not
    auto wordHasConsecutiveLetters = [](string &st) -> bool
    {
        for (unsigned short i = 0; i < st.length() - 1; ++i)
        {
            if (static_cast<int>(toupper(st[i + 1])) - toupper(st[i]) == 1)
            {
                return true;
            }
        }
        return false;
    };

    unsigned short count = 0; // To count number of consecutive words
    string word{};
    const char *separators{",;\":()[]/\\<>$%^&*@#~`|"}, *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            if (wordHasConsecutiveLetters(word))
            {
                cout << word << '\n';
                ++count;
            }
            word = "";
        }
        else if (!strchr(separators, character))
        {
            word += character;
        }
    }
    cout << "The sentence has " << count << " word(s) which has/have atleast a pair consecutive letters\n";
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

    displayWordsWithConsecutiveLetters(sentence);

    getch();
    return 0;
}