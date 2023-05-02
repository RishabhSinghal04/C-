
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
     // Concatenate Strings
     // Using + operator
     string word1{"Earth"}, word2{"Home"}, reslutant_string = word1 + " Our " + word2 + " Planet ";
     cout << reslutant_string << '\n';

     string str1{"Legends Rise"}; // Make the string one literal in the first place
     string str2{"Legends "
                 "Rise"};                      // Put the string literals side by side without + operator
     string str3{string{"Legends "} + "Rise"}; // Turn one or both into string object and concatenate

     cout << str1 << '\n'
          << str2 << '\n'
          << str3 << '\n';

     // Using suffix
     string str4{"Legends "s + "Rise"}; // Turn one or both into strings using the 's' suffix, using namespace std :: string_literals
     cout << str4 << '\n';

     // Using the append method
     string words1{"When ashes fall "}, words2{"the legends rise"};
     string songLine = words1.append(words2);
     cout << songLine << '\n';

     string sentence{"The sky "s.append("is blue")};
     cout << sentence << '\n';

     // More things with the append method
     string str5{"How are you?"};
     string questionMarks{str5.append(4, '?')}; // Appends four '?' characters
     cout << questionMarks << '\n';

     string message{"The world is our shared home."};
     string word{"Hello "};
     string newWord{word.append(message, 4, 5)}; // Append a sub-section of another string, starting from index 4, 5 characters
     cout << newWord << '\n';

     string hello{"Hello "};
     cout << hello.append(message, 4, 5) << '\n'; // Direct Output

     // Concatenate std::strings with characters
     string word3{"Legends"}, word4{"Rise"};
     string combinedWord{word3 + ' ' + word4}; // Using space
     string word5{"Hello"};

     word5 = word5 + ',' + '*'; // OR (word5 += ',') += '*';

     cout << combinedWord << '\n'
          << word5 << '\n';

     // Concatenate std::strings with C-Strings
     const char word6[]{"Whoa"};
     const char *word7{"Whoa"};

     cout << string{"Whoa "}.append(word6) << '\n'
          << string{"Whoa "}.append(word7) << '\n';
     cout << string{"Whoa "} + word6 << '\n'
          << string{"Whoa "} + word7 << '\n';

     // Concatenate std::string with numbers
     string songWords{"Legends Rise"};
     songWords = songWords + to_string(2);
     cout << songWords << '\n'
          << string{"Legends Rise"}.append(to_string(2.0F)) << '\n'
          << "Legends Rise" + to_string(10);

     getch();
     return 0;
}