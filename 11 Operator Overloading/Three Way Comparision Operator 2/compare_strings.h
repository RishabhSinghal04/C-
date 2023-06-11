#pragma once

#include <string>

class ComparableString
{
    std::string st;

public:
    ComparableString(const std::string &);

    std::weak_ordering operator<=>(const ComparableString &) const;

    bool operator==(const ComparableString &) const;
};