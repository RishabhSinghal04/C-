
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string solarSyatemFacts{R"__(    Proxima Centauri is the closest star to the Sun.
    Sun is the largest object in our solar system.
    Jupiter is the biggest planet in our solar system.
    Moon is the only natural satellite of our planet Earth.)__"};

    cout << "Some facts about our solar sysem:-" << '\n'
         << solarSyatemFacts;

    getch();
    return 0;
}