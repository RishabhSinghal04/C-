
#include <iostream>
#include <conio.h>

using namespace std;

void personInformation(string_view name = "Adam", unsigned short age = 29, size_t uniqueID = 1234567890ULL);
void userName(const string &name);
void UserName(string_view name);

int main()
{
    // Call and use default arguments
    personInformation();
    personInformation("Jason");
    personInformation("Benjamin", 31);
    personInformation("William", 32, 26357567846426ULL);

    string name{"Adam"};
    userName("Maxwell Clark");
    userName(name);

    // string_view parameters
    userName(name);
    UserName(static_cast<string_view>("Maxwell Clark"));

    // string_view to string
    string_view Name{name};
    userName(static_cast<string>(Name)); // Explicit conversion only [implicit conversion : error]

    getch();
    return 0;
}

void personInformation(string_view name, unsigned short age, size_t uniqueID)
{
    cout << name << '\t'
         << age << '\t'
         << uniqueID << '\n';
}

void userName(const string &name)
{
    cout << name << '\n';
}

void UserName(string_view name)
{
    cout << name << '\n';
}