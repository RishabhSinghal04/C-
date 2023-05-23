
#include <iostream>
#include <conio.h>
#include <optional>
#include <string>

using namespace std;

void getSentence(string &);
void displayString(string_view);

optional<int> findCharacter(string_view, const char);

optional<int> findCharacterV2(string_view str, optional<char> ch = nullopt)
{
    char findCharacter = ch.value_or('z'); // If ch has a value, otherwise assign with 'z'
    for (size_t index = 0; index < str.size(); ++index)
    {
        if (str.at(index) == findCharacter)
        {
            return index;
        }
    }
    return {};
}

int main()
{
    // Declare and initialize
    optional<int> num{10};
    optional<string> cpp_versions{"C++20, C++17, C++14, C++11"};
    optional<char> character{'s'};

    // Dec1are and empty initialize
    optional<std::string> name{};
    optional<int> age{nullopt}; // std::nullopt is the null or zero equivalent for std::optional

    optional<char> letter = nullopt; // Triggers unused warning
    optional<double> height = {};    // Initializes to std::nullopt, triggers unused warning.

    // Reading values : can use value() method or the dereference operator
    cout << "num : " << num.value() << '\n'
         << *num << '\n'; // can be confusing with pointers, use value() method
    cout << "cpp versions : " << cpp_versions.value() << '\n';
    cout << "character : " << character.value() << '\n';

    // Assign values to std::optional
    name = "Jason";
    age = 29;
    cout << "name : " << name.value() << '\n'
         << "age : " << age.value() << '\n';

    // Conditional Reading
    if (letter.has_value())
    {
        cout << "Variable \"letter\" has value : " << letter.value() << '\n';
    }
    else
    {
        cout << "Variable \"letter\" has no value\n";
    }

    letter = 'b';

    // Check against std::nullopt
    if (letter != nullopt)
    {
        cout << "Variable \"letter\" has value : " << letter.value() << '\n';
    }
    else
    {
        cout << "Variable \"letter\" has no value\n";
    }

    letter = nullopt;

    if (letter.has_value())
    {
        cout << "Variable \"letter\" has value : " << letter.value() << '\n';
    }
    else
    {
        cout << "Variable \"letter\" has no value\n";
    }

    height.has_value() ? cout << "Variable \"height\" has value : " << height.value() << '\n' : cout << "Variable \"height\" has no value\n";
    height = 45.79;
    height.has_value() ? cout << "Variable \"height\" has value : " << height.value() << '\n' : cout << "Variable \"height\" has no value\n";
    height = nullopt;
    height.has_value() ? cout << "Variable \"height\" has value : " << height.value() << '\n' : cout << "Variable \"height\" has no value\n";

    const char FIND_CHAR = 'a';
    string sentence;

    getSentence(sentence);
    displayString(sentence);

    cout << '\n';
    optional<int> result = findCharacter(sentence, FIND_CHAR);
    result.has_value() ? cout << FIND_CHAR << " found at position " << result.value() + 1 << '\n' : cout << FIND_CHAR << " not found\n";

    cout << '\n';
    optional<int> result2 = findCharacterV2(sentence);  // OR (sentence, 'a')
    result2.has_value() ? cout << "z found at position " << result2.value() + 1 << '\n' : cout << "z not found\n";

    getch();
    return 0;
}

void getSentence(string &sentence)
{
    cout << "Enter a sentence: ";
    getline(cin >> ws, sentence);
}

void displayString(string_view str)
{
    cout << str;
}

optional<int> findCharacter(string_view str, const char character)
{
    for (size_t index = 0; index < str.size(); ++index)
    {
        if (str.at(index) == character)
        {
            return index;
        }
    }
    return {};
}