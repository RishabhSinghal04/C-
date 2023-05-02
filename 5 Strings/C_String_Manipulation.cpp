
#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main()
{
    const char fact[]{"Amazon is the greatest river in the world."}; // Array
    const char *fact2{"Nile is the longest river in the world."};    // Pointer

    cout << "1st Sentence : " << fact << '\n';
    cout << "2nd Sentence : " << fact2 << '\n';

    // strlen ignores null character
    cout << "Total characters in 1st sentence : " << strlen(fact) << '\n';
    cout << "Total characters in 2nd sentence : " << strlen(fact2) << '\n';

    // sizeof includes the null character
    cout << "Total characters in 1st sentence (including null character) : " << sizeof(fact) << '\n';
    cout << "Size of pointer : " << sizeof(fact2) << '\n';
    cout << '\n';

    // Comparing Strings
    const char word1[]{"Fate"}, word2[]{"Gate"}, word3[]{"Late"}, word4[]{"Fat"};
    cout << "strcmp (" << word1 << ", " << word2 << ") : " << strcmp(word1, word2) << '\n';
    cout << "strcmp (" << word2 << ", " << word1 << ") : " << strcmp(word2, word1) << '\n';
    cout << "strcmp (" << word2 << ", " << word3 << ") : " << strcmp(word2, word3) << '\n';
    cout << "strcmp (" << word3 << ", " << word2 << ") : " << strcmp(word3, word2) << '\n';
    cout << "strcmp (" << word3 << ", " << word1 << ") : " << strcmp(word3, word1) << '\n';
    cout << "strcmp (" << word1 << ", " << word3 << ") : " << strcmp(word1, word3) << '\n';
    cout << "strcmp (" << word1 << ", " << word1 << ") : " << strcmp(word1, word1) << '\n';
    cout << "strcmp (" << word1 << ", " << word4 << ") : " << strcmp(word1, word4) << '\n';
    cout << "strcmp (" << word4 << ", " << word1 << ") : " << strcmp(word4, word1) << '\n';
    cout << '\n';

    // Comparing Strings using strncmp()
    const size_t N = 5;
    const char *vowelsLowerCase{"aeiou"}, *vowelsUpperCase{"AEIOU"}, *data1{"aaaaeiou"}, *data2{"aaeiouu"};
    cout << "strncmp (" << vowelsLowerCase << ", " << vowelsUpperCase << ") : " << strncmp(vowelsLowerCase, vowelsUpperCase, N) << '\n';
    cout << "strncmp (" << vowelsUpperCase << ", " << vowelsLowerCase << ") : " << strncmp(vowelsUpperCase, vowelsLowerCase, N) << '\n';
    cout << "strncmp (" << data1 << ", " << data2 << ") : " << strncmp(data1, data2, N) << '\n';
    cout << "strncmp (" << data2 << ", " << data1 << ") : " << strncmp(data2, data1, N) << '\n';
    cout << '\n';

    // Find first occurence of a character
    cout << strchr(fact, 'i') << '\n';

    // Find last occurence of a character
    cout << strrchr(fact, 'i') << '\n';

    getch();
    return 0;
}