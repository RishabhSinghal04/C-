
#include <iostream>
#include <conio.h>
#include <string>
#include <functional>

class Encrypt
{
public:
    char operator()(const char &character)
    {
        return static_cast<char>(character + 4);
    }
};

class Decrypt
{
public:
    char operator()(const char &character)
    {
        return static_cast<char>(character - 4);
    }
};

template <typename Modifier>
std::string &modify(std::string &, Modifier);

int main()
{
    using namespace std;

    Encrypt encrypt;
    Decrypt decrypt;

    std::string info{"The code of the game is known/unknown"};

    cout << encrypt('A') << '\n';
    cout << decrypt('E') << '\n';

    cout << modify(info, encrypt) << '\n';
    cout << modify(info, decrypt) << '\n';

    // standard functors
    plus<int> adder;
    minus<int> minus;
    equal_to<float> are_equal;

    cout << boolalpha;
    cout << "1050 + 1050 = " << adder(1010, 1010) << '\n';
    cout << "1010 - 1010 = " << minus(1010, 1010) << '\n';
    cout << "1010 == 1010 = " << are_equal(1010, 1010) << '\n';

    getch();
    return 0;
}

template <typename Modifier>
std::string &modify(std::string &st, Modifier modifier)
{
    for (auto &character : st)
    {
        character = modifier(character);
    }
    return st;
}
