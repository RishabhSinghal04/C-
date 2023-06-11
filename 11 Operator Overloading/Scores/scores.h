#pragma once

#include <string>

class Scores
{
    std::string course_name;
    static inline const uint16_t N = 10;
    double scores[N]{};

public:
    Scores() = delete;
    Scores(const std::string &);

    double &operator[](size_t);
    const double &operator[](size_t) const;

    void print_info() const;
};