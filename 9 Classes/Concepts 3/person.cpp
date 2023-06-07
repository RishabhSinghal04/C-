#include <iostream>
#include <string>

#include "person.h"

Person::Person()
{
    first_name = "";
    last_name = "";
    *age = 0;
}

/* Person::Person(const Person &person)
    : first_name(person.getFirstName()),
      last_name(person.getLastName()),
      age(new uint16_t(*(person.getAge())))
{
    std::cout << "\n Copy Constructor Body \n";
} */

Person::Person(const Person &person)
    : Person(person.getFirstName(),
             person.getLastName(),
             *(person.getAge()))
{
    std::cout << "\n Copy Constructor Body \n";
}

Person::Person(const std::string &first_name, const std::string &last_name, const uint16_t &age)
    : first_name{first_name}, last_name{last_name}, age(new uint16_t(age))
{
}

Person::Person(const std::string &first_name, const std::string &last_name)
    : Person(first_name, last_name, 0)
{
}

Person::Person(const std::string &first_name)
    : Person(first_name, "")
{
}

Person::~Person()
{
    delete age;
}

void Person::setFirstName(const std::string &first_name)
{
    this->first_name = first_name;
}

void Person::setLastName(const std::string &last_name)
{
    this->last_name = last_name;
}

void Person::setAge(const uint16_t &age)
{
    *(this->age) = age;
}

std::string Person::getFirstName() const
{
    return first_name;
}

std::string Person::getLastName() const
{
    return last_name;
}

uint16_t *Person::getAge() const
{
    return age;
}

void Person::displayInformation()
{
    std::cout << "Person object at : " << this
              << " [ First Name : " << first_name
              << ", Last Name : " << last_name
              << ", age : " << *age << " ]\n";
}