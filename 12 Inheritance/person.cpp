
#include "person.h"

Person::Person()
    : Person("", "", 0)
{
}

Person::Person(const std::string &first_name)
    : Person(first_name, "", 0)
{
}

Person::Person(const std::string &first_name, const std::string &last_name)
    : Person(first_name, last_name, 0)
{
}

Person::Person(const std::string &first_name, const std::string &last_name, uint16_t age)
    : first_name{first_name}, last_name{last_name}, age{age}
{
}

// _Getters_
const std::string &Person::get_first_name() const
{
    return first_name;
}

const std::string &Person::get_last_name() const
{
    return last_name;
}

const uint16_t Person::get_age() const
{
    return age;
}

// _Setters_

void Person::set_first_name(const std::string &first_name)
{
    this->first_name = first_name;
}

void Person::set_last_name(const std::string &last_name)
{
    this->last_name = last_name;
}

void Person::set_age(const uint16_t age)
{
    this->age = age;
}
