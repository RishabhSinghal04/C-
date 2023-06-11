#pragma once

struct Integer
{
    Integer() = default;
    explicit Integer(long long);

    long long getInteger() const;

    auto operator<=>(const Integer &integer) const = default;
    auto operator<=>(int) const;

    bool operator==(const Integer &) const;
    // bool operator<(const Integer &) const;
    bool operator==(int) const;

private:
    long long num;
};

class Int
{
    long long num;

public:
    Int() = default;
    explicit Int(long long num) : num{num} {};

    long long getInt() const
    {
        return num;
    }
};

inline auto operator<=>(const Int &integer1, const Int &integer2)
{
    return integer1.getInt() <=> integer2.getInt();
}

inline auto operator<=>(int integer1, const Int &integer2)
{
    return integer1 <=> integer2.getInt();
}

inline bool operator==(const Int &integer1, const Int &integer2)
{
    return integer1.getInt() == integer2.getInt();
}

inline bool operator==(int integer1, const Int &integer2)
{
    return integer1 == integer2.getInt();
}