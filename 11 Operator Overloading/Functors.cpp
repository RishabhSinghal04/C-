// Objects of a class that overloads this () operators

#include <iostream>
#include <conio.h>
#include <string>

class Print
{
public:
    void operator()(const std::string &name) const
    {
        std::cout << "Name is " << name << '\n';
    }

    std::string operator()(const std::string &first_name, const std::string &last_name)
    {
        return first_name + " " + last_name;
    }
};

void some_fun(const Print &p)
{
    p("Adam");
}

int main()
{
    using namespace std;

    Print print;
    some_fun(print);
    cout << print("Josh", "Gates") << '\n';

    getch();
    return 0;
}