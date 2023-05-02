
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string str{"Welcome"};

    // Resize up, autofill with '\0'
    cout << str << '\n'
         << str.size() << '\n'
         << str.capacity();

    str.resize(10); // Fill new char places with '\0' null character by default

    cout << str << '\n'
         << str.size() << '\n'
         << str.capacity() << '\n';

    for (size_t index = 0; index < str.size(); ++index)
    {
        cout << index << " : " << str[index] << '\n';
    }

    // Resize up, autofill with custom characters
    str.resize(11, '1');
    cout << str << '\n';

    // Resize down
    str.resize(5);
    cout << str << '\n';

    getch();
    return 0;
}