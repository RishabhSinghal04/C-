#pragma once

#include <cstring>

template <typename T>
class Adder
{
    // T element1, element2;

public:
    Adder() = default;
        /* : Adder(0.0, 0.0) {}

    Adder(const T element1, const T element2)
        : element1{element1}, element2{element2} {}

    // __Getters__
    const T getFirstElement() const
    {
        return element1;
    }

    const T getSecondElement() const
    {
        return element2;
    }

    // __Setters__
    void setFirstElement(const T element)
    {
        this->element1 = element;
    }

    void setSecondElement(const T element)
    {
        this->element2 = element;
    } */

    // Function to add two elements
    auto add(const T element1, const T element2)
    {
        return element1 + element2;
    }
};

template <>
class Adder<char *>
{
    // char *element1, *element2;

public:
    Adder() = default;
    /* {
    }

    Adder(char *element1, char *element2)
        : element1{element1}, element2{element2} {}

    // __Getters__
    char *getFirstElement() const
    {
        return element1;
    }

    char *getSecondElement() const
    {
        return element2;
    }

    // __Setters__
    void setFirstElement(char *element)
    {
        this->element1 = element;
    }

    void setSecondElement(char *element)
    {
        this->element2 = element;
    } */

    // Function to add two elements
    char *add(char *element1, char *element2)
    {
        return strcat(element1, element2);
    }
};