#pragma once
// #include <iostream>
class Person;

/**
 * @brief A class to store number of contract of an engineer.
 */
class Engineer : public Person
{
    uint16_t contract_count = 0;
    // Resurrecting Members back in Scope
    /* protected:
        using Person::get_age;
        using Person::get_first_name;
        using Person::get_last_name; */

public:
    // Inheriting Base Constructors
    // using Person::Person;

    Engineer()
        : Engineer("", "", 0, 0)
    {
    }

    // Custom Constructor
    Engineer(const std::string &first_name, const std::string &last_name, const uint16_t age, const uint16_t contract_count)
        : Person(first_name, last_name, age), contract_count{contract_count}
    {
    }

    // Copy Constructor
    /* Engineer(const Engineer &engineer)
        : Person(engineer), contract_count{engineer.contract_count}
    {
        std::cout << "\nCopy Constructor Called\n";
    } */

    uint16_t Age()
    {
        Engineer engineer;
        return engineer.age = 29; // Can access protected member
    }

    // __Getter__
    uint16_t get_contract_count() const
    {
        return contract_count;
    }

    // __Setter__
    void set_contract_count(const uint16_t contract_count)
    {
        this->contract_count = contract_count;
    }
};