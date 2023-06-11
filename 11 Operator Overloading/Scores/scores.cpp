
#include <cassert>
#include <iostream>

#include "scores.h"

Scores::Scores(const std::string &course_name)
    : course_name{course_name}
{
}

double &Scores::operator[](size_t index)
{
    assert(index >= 0 && index < N);
    return scores[index];
}

const double &Scores::operator[](size_t index) const
{
    assert(index >= 0 && index < N);
    return scores[index];
}

void Scores::print_info() const
{
    std::cout << course_name << " : [ " << scores[0];

    for (size_t index = 1; index < N; ++index)
    {
        std::cout << ", " << scores[index];
    }
    std::cout << " ]";
}