#pragma once

#include <string>

class Animal
{
public:
    Animal() = default;
    Animal(const std::string n) : m_name(n) {}
    virtual ~Animal() {}
    virtual void breathe() const
    {
    }

protected:
    std::string m_name;
};

class Feline : public Animal
{
public:
    Feline(const std::string n) : Animal(n) {}

private:
    int speed;
};