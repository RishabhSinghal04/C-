
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string fact{"_ is the largest planet in our solar system"}, planetName{"Jupiter"};
    cout << fact.replace(0, 1, planetName) << '\n';

    string fact2{"_ or _ is the largest object in our solar system"}, objects{"Sun, Moon"};
    cout << fact2.replace(0, 6, objects, 0, 3);

    getch();
    return 0;
}