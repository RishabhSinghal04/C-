
#include <conio.h>
#include <string>
#include "sentence.h"

using namespace std;

/**
 * @brief A function to count total number of words in a sentence
 * @param sentence std::string
 * @return count of words
 */
size_t countWords(string &sentence)
{
    size_t wordCount = 0ULL;
    for (auto &character : sentence)
    {
        if (isspace(character))
        {
            ++wordCount;
        }
    }
    return ++wordCount;
}

int main()
{
    string sentence{};

    cout << "Enter a sentence: ";
    getline(cin >> ws, sentence);

    if (!hasSentenceTerminated(sentence))
    {
        terminateSentence(sentence);
    }

    cout << "Number of words : " << countWords(sentence);

    getch();
    return 0;
}