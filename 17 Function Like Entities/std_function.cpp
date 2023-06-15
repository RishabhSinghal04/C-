
#include <iostream>
#include <conio.h>
#include <functional>
#include <vector>

// Functor
class Decrypt
{
public:
    char operator()(const char &character)
    {
        return static_cast<char>(character - 4);
    }
};

// Function pointer
char encrypt(const char &character)
{
    return static_cast<char>(character + 4);
}

void print_words_as_sentence(const std::vector<std::string> &);

std::vector<std::string> &modify(std::vector<std::string> &, std::function<char(const char &)>);

int main()
{
    // Basic usage of std::function : storing function like entities in a unified way.
    std::function<char(const char &)> modifier;

    // Function pointer
    modifier = encrypt;
    std::cout << "A encrypted becomes : " << modifier('A') << std::endl; // E

    // Functor
    Decrypt decrypt;
    modifier = decrypt;
    std::cout << "E decrypted becomes : " << modifier('E') << std::endl;

    // Lambda function
    modifier = [](const char &param)
    {
        return static_cast<char>(param + 4);
    };
    std::cout << "A encrypted becomes : " << modifier('A') << std::endl; // E

    // Storing function like entities in a collection
    std::cout << std::endl;
    std::cout << "Collection of function like entities :- " << std::endl;

    std::vector<std::function<char(const char &)>> fun_entities;

    fun_entities.emplace_back(encrypt); // Function pointer
    fun_entities.emplace_back(decrypt); // Functor

    fun_entities.emplace_back([](const char &character)
                              { return static_cast<char>(character + 4); });

    for (const auto &index : fun_entities)
    {
        std::cout << "E transformed becomes : " << index('E') << '\n';
    }

    // std::function as callback
    std::cout << std::endl;
    std::cout << "Modifying the quote :- " << std::endl;

    std::vector<std::string> quote;

    quote.emplace_back("The ");
    quote.emplace_back("sky ");
    quote.emplace_back("is ");
    quote.emplace_back("blue ");
    quote.emplace_back("my ");
    quote.emplace_back("friend.");

    print_words_as_sentence(modify(quote, encrypt));
    std::cout << std::endl;

    print_words_as_sentence(modify(quote, decrypt));
    std::cout << std::endl;

    getch();
    return 0;
}

void print_words_as_sentence(const std::vector<std::string> &st)
{
    for (const auto &word : st)
    {
        std::cout << word;
    }
}

// Modifying a vector of strings
std::vector<std::string> &modify(std::vector<std::string> &st, std::function<char(const char &)> modifier)
{
    for (auto &word : st)
    {
        for (auto &character : word)
        {
            if (!(isspace(character) || character == '.'))
            {
                character = modifier(character);
            }
        }
    }
    return st;
}