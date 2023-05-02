
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to display word(s) with double letter sequence
 * @param sentence std::string
 */
void displayWordsWithDoubleLetterSequence(string &sentence)
{
    // A lambda function to check if a word has double letter sequence or not
    auto wordHasDoubleLetterSequence = [](string &st) -> bool
    {
        for (unsigned short i = 0; i < st.length() - 1; ++i)
        {
            if (static_cast<int>(toupper(st[i + 1])) - toupper(st[i]) == 0)
            {
                return true;
            }
        }
        return false;
    };

    unsigned short count = 0; // To count number of double letter sequence words
    string word{};
    const char *separators{",;\":()[]/\\<>$%^&*@#~`|"}, *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            if (wordHasDoubleLetterSequence(word))
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
    cout << "Number of double letter sequence(s) word(s): " << count << '\n';
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

    displayWordsWithDoubleLetterSequence(sentence);

    getch();
    return 0;
}