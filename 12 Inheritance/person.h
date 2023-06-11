#pragma once

#include <string>

/**
 * @brief A class to store first name, last name and age of a person
 */
class Person
{
    std::string first_name{}, last_name{};

protected:
    uint16_t age = 0;

public:
    Person();
    Person(const std::string &);
    Person(const std::string &, const std::string &);
    Person(const std::string &, const std::string &, uint16_t);

    const std::string &get_first_name() const;
    const std::string &get_last_name() const;
    const uint16_t get_age() const;

    void set_first_name(const std::string &);
    void set_last_name(const std::string &);
    void set_age(const uint16_t);
};