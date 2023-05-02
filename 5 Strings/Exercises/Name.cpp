
#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>

using namespace std;

/**
 * @brief A function to check if a name is in valid format or not
 * @param name std::string
 * @return Boolean Value
 */
bool isNameValid(const string &name)
{
    if (isblank(name.back()))
    {
        return false;
    }

    const char *digits{"0123456789"}, *punctuators{"`~!@#$%^&*()_+=,<>/?;:'\"][}{"};

    for (size_t index = 0; index < name.length(); ++index)
    {
        if (strchr(digits, name.at(index)) || strchr(punctuators, name.at(index)))
        {
            return false;
        }
        else if (isspace(name.at(index)) && isspace(name.at(index + 1)))
        {
            return false;
        }
    }
    return true;
}

/**
 * @brief A function to display initials of a name
 * @param name std::string
 */
void displayInitials(const string &name)
{
    cout << name.front();

    const size_t firstIndexOfSpace = name.find_first_of(' ');
    const size_t lastIndexOfSpace = name.find_last_of(' ');

    for (size_t index = firstIndexOfSpace; index <= lastIndexOfSpace; ++index)
    {
        if (isblank(name.at(index)))
        {
            cout << '.' << name.at(index + 1);
        }
    }
}

/**
 * @brief A function to display initials of a name with surname
 * @param name
 */
void displayInitialsWithSurname(const string &name)
{
    cout << name.front() << '.';

    const size_t firstIndexOfSpace = name.find_first_of(' ');
    const size_t lastIndexOfSpace = name.find_last_of(' ');

    for (size_t index = firstIndexOfSpace; index < lastIndexOfSpace; ++index)
    {
        if (isblank(name.at(index)))
        {
            cout << name.at(index + 1) << '.';
        }
    }
    cout << ' ' << name.substr(lastIndexOfSpace + 1, name.length());
}

/**
 * @brief A function to display name in bibliographical format
 * @param name std::string
 */
void displayNameBibliographically(const string &name)
{
    const size_t firstIndexOfSpace = name.find_first_of(' ');
    const size_t lastIndexOfSpace = name.find_last_of(' ');

    cout << name.substr(lastIndexOfSpace + 1, name.length());
    cout << ' ' << name.front();

    for (size_t index = firstIndexOfSpace; index < lastIndexOfSpace; ++index)
    {
        if (isblank(name.at(index)))
        {
            cout << ' ' << name.at(index + 1);
        }
    }
}

int main()
{
    string name{};

    cout << "Enter Name: ";
    getline(cin >> ws, name);

    if (isNameValid(name))
    {
        displayInitials(name);
        cout << '\n';

        displayInitialsWithSurname(name);
        cout << '\n';

        displayNameBibliographically(name);
        cout << '\n';
    }
    else
    {
        cout << "Not a valid name format";
    }

    getch();
    return 0;
}