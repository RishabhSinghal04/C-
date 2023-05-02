
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    // std::strings can be wastefull
    string sentence{"The sky is blue."}, copySentence{sentence}; // copy same string into different memory location

    cout << "&sentence[0] : " << (void *)sentence.data() << '\n'
         << "&copySentence[0] : " << (void *)copySentence.data() << '\n';

    // Using std::string_view
    string fact{"Jupiter is the biggest planet in our solar system."};
    string_view fact_view{fact};

    cout << "sizeof(std::string_view) : " << sizeof(string_view) << '\n';

    cout << "&fact[0] : " << (void *)fact.data() << '\n'
         << "&fact_view[0] : " << (void *)fact_view.data() << '\n';

    cout << "fact : " << fact << '\n'
         << "fact_view : " << fact_view << '\n';

    fact.clear();
    fact = "Sun is the largest object in our solar system.";
    cout << "fact : " << fact << '\n'
         << "fact_view : " << fact_view << '\n';

    // Changing the view span
    string str{"0, 1, 2, 3, 4, 5, 6, 7, 8, 9"};
    string_view str_view{str};

    cout << "str : " << str << '\n';

    str_view.remove_prefix(2); // Removes "0, "
    cout << str_view << '\n';

    str_view.remove_suffix(6); // Removes ", 8, 9"
    cout << str_view << '\n';

    cout << str << '\n';

    // Some other std::string_view methods
    string_view fact_view2{"Proxima Centauri is the closest star to the Sun."};

    cout << fact_view2 << '\n'
         << fact_view2.length() << '\n'
         << fact_view2.front() << '\n'
         << fact_view2.back() << '\n'
         << fact_view2.substr(0, 16) << '\n';

    getch();
    return 0;
}