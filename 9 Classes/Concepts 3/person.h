#pragma once
#include <iostream>
#include <string>

class Person
{
    std::string first_name;
    std::string last_name;
    uint16_t *age{};

public:
    Person();
    Person(const std::string &, const std::string &, const uint16_t &);
    Person(const std::string &, const std::string &);
    Person(const std::string &);
    Person(const Person &); // Copy Constructor
    ~Person();

    void setFirstName(const std::string &);
    void setLastName(const std::string &);
    void setAge(const uint16_t &);

    std::string getFirstName() const;
    std::string getLastName() const;
    uint16_t *getAge() const;

    void displayInformation();
};