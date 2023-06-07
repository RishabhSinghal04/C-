
#include <iostream>
#include <conio.h>
#include <string>

class Person
{
    std::string name;
    uint16_t age;

public:
    Person();
    Person(const std::string &, const uint16_t &);

    std::string getName() const;
    uint16_t getAge() const;

    void setName(const std::string &);
    void setAge(const uint16_t &);

    friend void displayInfo(const Person &);
    friend void displayInfo();
    friend class Alien;
};

class Alien
{
    std::string planet, name;
    uint16_t alien_age;

public:
    Alien()
    {
        planet = "";
        name = "";
        alien_age = 0;
    }
    Alien(const std::string &planet, const std::string &name, const uint16_t &alien_age)
    {
        this->planet = planet;
        this->name = name;
        this->alien_age = alien_age;
    }

    void showInformation(const Person &person)
    {
        std::cout << person.name << '\n'
                  << person.age << '\n';
    }

    void showInformation(const Alien &alien)
    {
        std::cout << alien.planet << '\n'
                  << alien.name << '\n'
                  << alien.alien_age << '\n';
    }

    /* std::string getName() const;
    uint16_t getAge() const;

    void setName(const std::string &);
    void setAge(const uint16_t &); */
};

void displayInfo(const Person &person)
{
    std::cout << person.name << '\n'
              << person.age << '\n';
}

void displayInfo()
{
    Person person("John", 29);
    std::cout << person.name << '\n'
              << person.age << '\n';
}

Person::Person()
{
    name = "";
    age = 0;
}

Person::Person(const std::string &name, const uint16_t &age)
{
    this->name = name;
    this->age = age;
}

std::string Person::getName() const
{
    return name;
}

uint16_t Person::getAge() const
{
    return age;
}

void Person::setName(const std::string &name)
{
    this->name = name;
}

void Person::setAge(const uint16_t &age)
{
    this->age = age;
}

int main()
{
    using namespace std;

    Person p1, p2("Sherlock", 47);

    if (p1.getName().empty())
    {
        displayInfo();
        displayInfo(p2);
    }
    else
    {
        cout << p1.getName();
    }

    Alien a1("Planet 9", "James", 46);
    a1.showInformation(p2);
    a1.showInformation(a1);

    getch();
    return 0;
}