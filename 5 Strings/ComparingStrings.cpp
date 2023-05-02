
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string str1{""}, str2{""};
    cout << boolalpha;

    // Using the comparision operators
    cout << "str1 == str2 (both are empty) : " << (str1 == str2) << '\n';

    str1 = "sim";
    str2 = "tim";

    cout << str1 << " == " << str2 << " : " << (str1 == str2) << '\n';
    cout << str1 << " >= " << str2 << " : " << (str1 >= str2) << '\n';
    cout << str1 << " <= " << str2 << " : " << (str1 <= str2) << '\n';
    cout << str1 << " > " << str2 << " : " << (str1 > str2) << '\n';
    cout << str1 << " < " << str2 << " : " << (str1 < str2) << '\n';
    cout << str1 << " != " << str2 << " : " << (str1 != str2) << '\n';

    // Compare std::strings to C-Strings
    const char *c_str{"dim"};
    cout << str1 << " == " << c_str << " : " << (str1 == c_str) << '\n';
    cout << str1 << " >= " << c_str << " : " << (str1 >= c_str) << '\n';
    cout << str1 << " <= " << c_str << " : " << (str1 <= c_str) << '\n';
    cout << str1 << " > " << c_str << " : " << (str1 > c_str) << '\n';
    cout << str1 << " < " << c_str << " : " << (str1 < c_str) << '\n';
    cout << str1 << " != " << c_str << " : " << (str1 != c_str) << '\n';

    // Using std::string::compare()
    cout << noboolalpha;
    cout << str1.compare(str2) << '\n'
         << str2.compare(str1) << '\n';

    // Compare part of std::string
    cout << str1.compare(1, 2, str2, 1, 2) << '\n'; // Compare "im" part of both strings

    string s1{"Hello"}, s2{"Hello World"};
    cout << s2.compare(0, 5, s1) << '\n'; // Compare s2 = "Hello World" from index 0 taking 5 characters to s1 = "Hello"

    // Compare std::strings to C-Strings using std::string::compare()
    cout << str1.compare(c_str) << '\n'
         << str1.compare(1, 2, c_str, 1, 2) << '\n' // Compare "im" part of both strings
         << str1.compare("sight") << '\n'
         << str1.compare(0, 2, "sight", 0, 2) << '\n'; // Compare "si" part of both strings

    getch();
    return 0;
}