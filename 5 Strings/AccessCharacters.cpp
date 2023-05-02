
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string fact{"Sun is the largest object in our solar system."};

    // Reading characters one by one using [] operator
    for (size_t index = 0; index < fact.size(); ++index)
    {
        cout << " " << fact[index];
    }
    cout << '\n';

    // Using range based for loop
    for (auto character : fact)
    {
        cout << " " << character;
    }
    cout << '\n';

    // Using the at() method
    for (size_t index = 0; index < fact.size(); ++index)
    {
        cout << " " << fact.at(index);
    }
    cout << '\n';

    // Modifications or modifying data
    string word{"rest"};
    cout << word << '\n';

    word.at(0) = 'l';
    word[1] = 'i';
    cout << word << '\n';

    // Get first and last characters
    string movieName{"Jurassic Park"};
    cout << movieName << '\n';

    char &firstCharacter = movieName.front(), &lastCharacter = movieName.back();
    // Modify with references
    firstCharacter = 'j';
    lastCharacter = 'K';
    cout << movieName << '\n';
    // Modify directly from calls to front and back
    movieName.front() = 'J';
    movieName.back() = 'k';
    cout << movieName << '\n';

    // c_str() method
    string str{"The Phoenix King"};
    const char *wrapped_c_string = str.c_str();
    cout << wrapped_c_string << '\n';

    // data() method can be used to modify the true underlying char array
    string str2{"Hello World"};
    char *data = str2.data();
    cout << data << '\n';
    // Also changes string str2
    data[0] = 'h';
    data[6] = 'w';
    cout << "Wrapped C String: " << data << '\n'
         << "Original C String: " << str2;

    getch();
    return 0;
}