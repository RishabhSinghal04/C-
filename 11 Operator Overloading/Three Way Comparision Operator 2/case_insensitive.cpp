
#include <compare>

#include "case_insensitive.h"

CaseInsensitive::CaseInsensitive(const std::string &st)
    : st{st}
{
}

std::weak_ordering CaseInsensitive::operator<=>(const CaseInsensitive &right_side) const
{
    return case_insensitive_compare(st, right_side.st);
}

bool CaseInsensitive::operator==(const CaseInsensitive &right_side) const
{
    return case_insensitive_compare(st, right_side.st) == std::weak_ordering::equivalent
               ? true
               : false;
}