#pragma once

#include <string>

class CaseInsensitive
{
    std::string st;

public:
    CaseInsensitive(const std::string &);

    std::weak_ordering operator<=>(const CaseInsensitive &) const;

    bool operator==(const CaseInsensitive &) const;
};

std::weak_ordering case_insensitive_compare(const std::string &string1, const std::string &string2)
{
    std::string st1{string1}, st2{string2};

    for (auto &character : st1)
    {
        character = toupper(character);
    }

    for (auto &character : st2)
    {
        character = toupper(character);
    }

    short cmp = st1.compare(st2);

    return (cmp == 0)
               ? std::weak_ordering::equivalent
           : (cmp > 0)
               ? std::weak_ordering::greater
               : std::weak_ordering::less;
}