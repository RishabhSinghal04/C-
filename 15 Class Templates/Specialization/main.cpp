
#include <iostream>
#include <conio.h>

#include "adder.h"

int main()
{
    using namespace std;

    Adder<int> adder1_int;
    cout << "\n int : " << adder1_int.add(122, 907);

    Adder<float> adder_flt;
    cout << "\n float : " << adder_flt.add(23.22F, 78.14F);

    Adder<string> adder_str;
    cout << "\n string : " << adder_str.add("Hello", " World");

    Adder<char> adder_char;
    cout << "\n char : " << adder_char.add('a', 'a');

    char word1[] = "Basket \0", word2[] = "Ball\0";
    Adder<char *> adder_char_ptr;
    cout << "\n char* : " << adder_char_ptr.add(word1, word2);

    getch();
    return 0;
}