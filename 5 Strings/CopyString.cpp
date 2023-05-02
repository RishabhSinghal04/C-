
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string str{"The sky is blue"};
    char someText[str.size()]{"\0"};

    str.copy(someText, str.size(), 0);
    cout << someText;

    getch();
    return 0;
}