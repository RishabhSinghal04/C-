
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // Check if character is alphanumeric (0 if false)
    cout << "Alphanumeric:-\n"
         << isalnum('c') << '\n'
         << isalnum('1') << '\n'
         << isalnum('*') << '\n';

    // Check if a character is an alphabet (0 if false)
    cout << "Alphabet:-\n"
         << isalpha('A') << '\n'
         << isalpha('z') << '\n'
         << isalpha(0) << '\n';

    // Check if a character is a punctuantion character (0 if false)
    cout << "Punctuation Character:-\n"
         << ispunct(',') << '\n'
         << ispunct('.') << '\n'
         << ispunct('&') << '\n'
         << ispunct('1') << '\n'
         << ispunct('A') << '\n';

    // Count number of blank characters
    size_t blankCharacterCount = 0;
    const char sentence[]{"Nothing is faster than the speed of light on the planet."};

    for (auto character : sentence)
    {
        if (isblank(character))
        {
            ++blankCharacterCount;
        }
    }

    cout << "\nNumber of blank characters or spaces in the sentence " << '\"' << sentence << "\" are " << blankCharacterCount << '\n';

    // Count number of lower and upper case characters
    size_t upperCaseCount = 0, lowerCaseCount = 0;
    cout << "The sentence : " << sentence << '\n';

    for (auto character : sentence)
    {
        if (isupper(character))
        {
            upperCaseCount++;
        }
        else if (islower(character))
        {
            lowerCaseCount++;
        }
    }

    cout << "Number of upper case letters : " << upperCaseCount << '\n'
         << "Number of lower case letters : " << lowerCaseCount << '\n';

    // Check if a character is digit
    size_t digitCount = 0;
    const char fact[]{"Speed of light is 3 X 10 ^ 8 m/s or 300000 km/s."};

    for (auto character : fact)
    {
        if (isdigit(character))
        {
            digitCount++;
        }
    }

    cout << "\nNumber of digits in the sentence " << '\"' << fact << "\" are " << blankCharacterCount << '\n';

    // Convert lower case characters into upper case characters and vice-versa
    char sentence2[]{"The Sky is Blue."};
    cout << "\nThe sentence : " << sentence2 << '\n';

    for (auto &character : sentence2)
    {
        if (islower(character))
        {
            character = toupper(character);
        }
        else if (isupper(character))
        {
            character = tolower(character);
        }
    }

    cout << "After converting lower case characters into upper case characters and vice-versa, the sentence is " << sentence2;

    getch();
    return 0;
}