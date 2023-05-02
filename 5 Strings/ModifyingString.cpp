
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     string str{"Hello there"}, str2{"1001"};
     cout << str << '\n'
          << str2 << '\n';

     // Remove all characters from the string
     str.clear();
     cout << str << " (removed all characters)" << '\n'
          << "capacity : " << str.capacity() << '\n'
          << "size : " << str.size() << '\n';

     // Insert characters at index
     cout << "insert():-\n";
     str2.insert(1, 2, '2'); // insert 2 two times at index 1
     cout << str2 << '\n';

     const char *num{" is a natural number"}; // Insert C-String
     str2.insert(6, num);
     cout << str2 << '\n';
     str2.clear(); // Clear String

     str2 = "The sky is .";
     const char *colors{"blue, green, red, yellow, brown, orange, black"};
     str2.insert(11, colors, 4); // Insert a part of C-String
     cout << str2 << '\n';
     str2.clear(); // Clear String

     str2 = "Hello";
     string str3{" World"};
     str2.insert(5, str3); // Insert std::string
     cout << str2 << '\n';
     str2.clear(); // Clear String

     str2 = "Planet";
     string str4{"The largest planet in our solar system is Jupiter."};
     str2.insert(6, str4, 41, 8); // Insert a part of std::string
     cout << str2 << '\n';

     // Erase characters from a string
     cout << "erase():-\n";
     string str5{"Hello World is a message used to start off things when learning programming!"};
     string temp{"01234567890"};
     cout << temp.erase(10, temp.size() - 10) << '\n'; // Erase 1 character starting from index 10; temp.size() = 11
     /*
     '!' is at index 75 (size() - 1) and 'p' is at index 64 (75 - 11 = 64)
     "Hello " : 6 characters and "programming!" : 12 characters
     */
     cout << str5.erase(6, str5.size() - 18) << '\n'; // Erase str5.size() - 18 characters starting from index 6

     // Append a given character to the end of string
     str5.push_back('!');
     cout << str5 << '\n';

     // Remove the last character string
     str5.pop_back();
     cout << str5 << '\n';

     getch();
     return 0;
}