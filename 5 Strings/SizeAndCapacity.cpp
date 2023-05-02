
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string name, str{"Welcome"}, str2{};
    cout << boolalpha;

    // empty() method
    cout << "empty()" << '\n';
    cout << name.empty() << '\n'
         << str.empty() << '\n'
         << str2.empty() << '\n';

    // size() method
    cout << "size()" << '\n';
    cout << name.size() << '\n'
         << str.size() << '\n'
         << str2.size() << '\n';

    // length() method same as size()
    cout << "length()" << '\n';
    cout << name.length() << '\n'
         << str.length() << '\n'
         << str2.length() << '\n';

    // maximum number of characters a string can have
    cout << "max_size()" << '\n';
    cout << name.max_size() << '\n'
         << str.max_size() << '\n'
         << str2.max_size() << '\n';

    // Current maximum number of characters you can store in the string
    cout << "capacity()" << '\n';
    cout << name.capacity() << '\n'
         << str.capacity() << '\n'
         << str2.capacity() << '\n';
    str2 = "When ashes fall the legends rise";
    cout << str2.capacity() << '\n';

    // Update the capacity
    cout << "reserve()" << '\n';
    str.reserve(20);
    cout << str.capacity() << '\n';
    cout << str.size() << '\n';
    str = "The sky is blue, the grass is green.";
    cout << str.capacity() << '\n';
    cout << str.size() << '\n';

    // shrink to fit
    cout << "shrink_to_fit()" << '\n';
    str.shrink_to_fit();
    cout << str.capacity() << '\n'
         << str.size();

    getch();
    return 0;
}