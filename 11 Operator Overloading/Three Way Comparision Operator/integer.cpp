
#include <compare>

#include "integer.h"

Integer::Integer(long long num)
    : num{num}
{
}

auto Integer::operator<=>(int num) const
{
    return this->num <=> num;
}

bool Integer::operator==(const Integer &integer) const
{
    return (num == integer.num);
}

bool Integer::operator==(int num) const
{
    return (this->num == num);
}

/* bool Integer::operator<(const Integer &integer) const
{
    return (num < integer.num);
} */
