
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string names[] = {"Armstrong", "Hubble", "Paul", "William", "Sherlock", "James", "Jack"};
    string spaceObjects[][2] = {{"Sun", "Star"},
                                {"Jupiter", "Planet"},
                                {"Ton618", "Black Hole"},
                                {"Titan", "Moon"}};

    for (auto &word : names)
    {
        cout << word << '\n';
    }

    for (auto &word1 : spaceObjects)
    {
        for (auto &word2 : word1)
        {
            cout << "  " << word2;
        }
        cout << '\n';
    }

    getch();
    return 0;
}