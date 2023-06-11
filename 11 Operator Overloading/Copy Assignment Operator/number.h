#pragma once

class Number
{
    int num_integer{};

public:
    Number() = default;
    Number(int);

    int getNumber() const;
    void setNumber(const int &);
};