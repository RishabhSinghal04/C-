
#include <iostream>
#include <conio.h>
#include <string>

class Person
{
    std::string first_name{}, last_name{};
    uint16_t age{};

public:
    Person()
        : Person("", "", 0) {}

    Person(const std::string &first_name)
        : Person(first_name, "", 0) {}

    Person(const std::string &first_name, const std::string &last_name)
        : Person(first_name, last_name, 0) {}

    Person(const std::string &first_name, const std::string &last_name, const uint16_t age)
        : first_name{first_name}, last_name{last_name}, age{age} {}

    void get_information()
    {
        auto info = [this]()
        {
            std::cout << "Name : " << first_name << " " << last_name << "\nAge : " << age;
        };
        info();
    }
};

int main()
{
    using namespace std;

    Person person1("Adma", "", 40);
    Person person2("John", "Clark", 44);

    person1.get_information();
    cout << '\n';

    person2.get_information();
    cout << '\n';

    getch();
    return 0;
}