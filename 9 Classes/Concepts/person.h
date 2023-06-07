#pragma once
#include <string>

class Person
{
    std::string name;
    uint16_t age;
    // mutable uint16_t age;
    // uint16_t *weight{nullptr};

public:
    Person();
    Person(std::string_view, uint16_t);
    // ~Person();

    /* Person &setName(std::string_view name)
    {
        this->name = name;
        return *this;
    }

    Person &setAge(uint16_t age)
    {
        this->age = age;
        return *this;
    }

    Person &setWeight(uint16_t _weight)
    {
        this->weight = new uint16_t;
        *weight = _weight;
        return *this;
    } */

    // Getters
    std::string getName() const;
    uint16_t getAge() const;
    // uint16_t getWeight();

    // Setters
    void setName(std::string_view);
    void setAge(uint16_t);
    // void setWeight(uint16_t);
};