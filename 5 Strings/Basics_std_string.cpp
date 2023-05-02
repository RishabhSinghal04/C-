
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string name; // Empty String

    const string fact{"Jupiter is the largest planet in our solar system."}; // Initialize with string literals

    string copyFact = fact; // Initialize with other existing string
    string word{"Welcome"};
    string replicate(10, '*'); // Initialze with multiple copies of a character
    string message{"Hello World"};
    string hello{"Hello Hi Hey", 5}; // Initialize with part of a string literal, hello = "Hello"
    string world{message, 6, 5};     // Initialize with part of an existing string, starting at index 6, taking 5 characters world = "World"

    cout << name << '\n';

    cout << "Enter your name: "; // Input name
    getline(cin >> ws, name);

    cout << fact << '\n'
         << copyFact << '\n'
         << word << '\n'
         << replicate << '\n'
         << name << '\n'
         << hello << '\n'
         << world << '\n';

    getch();
    return 0;
}