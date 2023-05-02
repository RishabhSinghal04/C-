
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/**
 * @brief A function to display a word in alphabetical order.
 * @param word std::string
 */
void displayAlphabetically(string &word)
{
    for (unsigned short i = 65; i <= 90; ++i)
    {
        for (auto &character : word)
        {
            if (character == static_cast<char>(i) || character == static_cast<char>(i + 32))
            {
                cout << character;
            }
        }
    }
}

int main()
{
    string word{};

    cout << "Enter a word: ";
    cin >> word;

    cout << "Alphabetical Order : ";
    displayAlphabetically(word);

    getch();
    return 0;
}