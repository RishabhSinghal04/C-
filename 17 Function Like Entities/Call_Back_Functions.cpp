
#include <iostream>
#include <conio.h>
#include <string>

const char encrypt(const char &);
const char decrypt(const char &);

const std::string &modify(std::string &, const char (*)(const char &));

int main()
{
    using namespace std;

    std::string info{"The code of game is encrypted"};

    cout << modify(info, encrypt) << '\n';
    cout << modify(info, decrypt) << '\n';

    getch();
    return 0;
}

const char encrypt(const char &character)
{
    return static_cast<const char>(character + 4);
}

const char decrypt(const char &character)
{
    return static_cast<const char>(character - 4);
}

const std::string &modify(std::string &st, const char (*modifier)(const char &))
{
    for (auto &character : st)
    {
        character = modifier(character);
    }
    return st;
}