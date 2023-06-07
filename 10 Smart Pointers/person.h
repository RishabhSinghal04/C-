#pragma once

#include <memory>

class Person
{
    std::weak_ptr<Person> _friend;
    std::string name;

public:
    Person() = default;

    Person(std::string name)
        : name{name}
    {
    }

    const std::string &getName() const
    {
        return name;
    }

    void setName(const std::string &name)
    {
        this->name = name;
    }

    void setFreind(std::shared_ptr<Person> m_friend)
    {
        this->_friend = m_friend;
    }
};