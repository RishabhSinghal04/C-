
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to convert all the first letters of the words in upper case.
 * @param sentence std::string
 * @return The new sentence formed
 */
string FirstLettersToUpperCase(string &sentence)
{
    auto UpperCase = [](string &st) -> string
    {
        for (auto &ch : st)
        {
            if (isalpha(ch))
            {
                ch = toupper(ch);
                break;
            }
        }
        return st;
    };

    string newSentence{}, word{};
    const char *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            UpperCase(word);
            newSentence += word + " ";
            word = "";
        }
        else
        {
            word += character;
        }
    }
    newSentence.erase(newSentence.length() - 1, 1);
    newSentence += sentence.back();
    return newSentence;
}

/**
 * @brief A function to convert all the first letters of the words in lower case.
 * @param sentence std::string
 * @return The new sentence formed
 */
string FirstLettersToLowerCase(string &sentence)
{
    auto LowerCase = [](string &st) -> string
    {
        for (auto &ch : st)
        {
            if (isalpha(ch))
            {
                ch = tolower(ch);
                break;
            }
        }
        return st;
    };

    string newSentence{}, word{};
    const char *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            LowerCase(word);
            newSentence += word + " ";
            word = "";
        }
        else
        {
            word += character;
        }
    }
    newSentence.erase(newSentence.length() - 1, 1);
    newSentence += sentence.back();
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

    cout << "Sentence after converting first letters of each word in upper case is \"" << FirstLettersToUpperCase(sentence) << "\"\n";
    cout << "Sentence after converting first letters of each word in lower case is \"" << FirstLettersToLowerCase(sentence) << "\"\n";

    getch();
    return 0;
}