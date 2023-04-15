
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char word[]{'H', 'e', 'l', 'l', 'o', '\0'};

    for (auto i : word) // Display array elements through loop
    {
        cout << i;
    }
    // Display array elements using 'cout' only
    cout << "\n(Without loop) "
         << word;
    cout << "\nSize of word[] is " << size(word);

    word[0] = 'h'; // Change an element
    cout << '\n'
         << word;

    char word2[]{"Welcome"}, sentence[]{"Array of characters\n Array of integers"}; // Literal C String

    cout << '\n'
         << word2 << "\nSize of word2[] is "
         << size(word2);
    cout << '\n'
         << sentence << "\nSize of sentence[] is "
         << size(sentence);

    getch();
    return 0;
}