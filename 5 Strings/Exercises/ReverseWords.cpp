
#include <conio.h>
#include <string>
#include <algorithm>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to reverse the order of sentence "abcd efgh ijkl mnop. -> mnop ijkl efgh abcd."
 * @param sentence std::string
 * @return Reverse order of sentence
 */
string reverseOrder(string &sentence)
{
    string newSentence{}, word{};
    const char *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            newSentence = " " + word + newSentence;
            word = "";
        }
        else
        {
            word += character;
        }
    }
    return newSentence.erase(0, 1) + sentence.back();
}

/**
 * @brief A function to reverse the sentence "abcd efgh. -> hgfe dcba."
 * @param sentence std::string
 * @return Reverse of a sentence
 */
string reverseSentence(string &sentence)
{
    string revSentence = sentence;
    reverse(revSentence.begin(), revSentence.end() - 1);
    return revSentence;
}

/**
 * @brief A function to reverse words in a sentence "abcd efgh -> dcba hgfe."
 * @param sentence std::string
 * @return New sentence with each word reverse
 */
string reverseWords(string &sentence)
{
    string newSentence{}, word{};
    const char *separators{",;\":()[]/\\<>$%^&*@#~`|"}, *terminators{".?!"};

    for (auto &character : sentence)
    {
        if (isspace(character) || strchr(terminators, character))
        {
            newSentence += word + " ";
            word = "";
        }
        else if (strchr(separators, character))
        {
            word += character;
        }
        else
        {
            word = character + word; // Reversing
        }
    }
    return newSentence.erase(newSentence.length() - 1) + sentence.back();
}

int main()
{
    string sentenceTemp{};

    cout << "Enter a sentence: ";
    getline(cin >> ws, sentenceTemp);

    string sentence = extractSentence(sentenceTemp);
    cout << "The sentence is \"" << sentence << "\"\n";

    if (!hasSentenceTerminated(sentence))
    {
        terminateSentence(sentence);
    }

    cout << "\nSentence after the arrangement of words from end to begin is \"" << reverseOrder(sentence) << "\"\n";
    cout << "\nReverse of the sentence is \"" << reverseSentence(sentence) << "\"\n";
    cout << "\nSentence after reversing every word is \"" << reverseWords(sentence) << "\"\n";

    getch();
    return 0;
}