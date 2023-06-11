
#include <compare>

#include "compare_strings.h"

ComparableString::ComparableString(const std::string &st)
    : st{st}
{
}

std::weak_ordering ComparableString::operator<=>(const ComparableString &right_side) const
{
    /* if (st.size() == right_side.st.size())
    {
        return std::weak_ordering::equivalent;
    }
    else if (st.size() > right_side.st.size())
    {
        return std::weak_ordering::greater;
    }
    else
    {
        return std::weak_ordering::less;
    } */

    return st.size() == right_side.st.size()
               ? std::weak_ordering::equivalent
           : st.size() > right_side.st.size()
               ? std::weak_ordering::greater
               : std::weak_ordering::less;
}

bool ComparableString::operator==(const ComparableString &right_side) const
{
    return (st.size() == right_side.st.size());
}