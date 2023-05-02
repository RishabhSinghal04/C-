
#include <iostream>
#include <cstring>

/**
 * @brief A function to take input '.' or '!' or '?' to terminate a sentence
 * @param str std::string
 */
void terminateSentence(std::string &str)
{
    char punctCharacter = '\0';
    do
    {
        std::cout << "\nEnter '.' or '!' or '?' to terminate the sentence: ";
        std::cin >> punctCharacter;
        if (punctCharacter == '.' || punctCharacter == '!' || punctCharacter == '?')
        {
            str += punctCharacter;
            break;
        }
        std::cout << "\n I N V A L I D \n";
        punctCharacter = '\0';
    } while (true);
}

/**
 * @brief A function to check if a sentence is properly terminated or not
 * @param sentence
 */
bool hasSentenceTerminated(std::string &sentence)
{
    if (!(sentence.back() == '.' || sentence.back() == '!' || sentence.back() == '?'))
    {
        return false;
    }
    return true;
}

std::string extractSentence(std::string &sentence)
{
    size_t terminatorIndex = std::string::npos;
    const char *terminators{".?!"};

    for (size_t index = 0; index < sentence.length(); ++index)
    {
        if (strchr(terminators, sentence[index]))
        {
            terminatorIndex = index;
            break;
        }
    }

    if (terminatorIndex == std::string::npos)
    {
        return sentence;
    }

    std::string str = sentence;
    return str.substr(0, terminatorIndex + 1);
}