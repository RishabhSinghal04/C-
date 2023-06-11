#pragma once

#include <concepts>

template <typename T>
    requires std::is_arithmetic_v<T>

class Point
{
    T x, y;

public:
    Point();
    Point(T, T);

    // __Getters__
    const T getX() const;
    const T getY() const;

    // __Setters__
    void setX(const T);
    void setY(const T);
};

template <typename T>
Point<T>::Point()
    : Point(0.0, 0.0)
{
}

template <typename T>
Point<T>::Point(T x, T y)
    : x{x}, y{y}
{
}

// __Getters__
template <typename T>
const T Point<T>::getX() const
{
    return x;
}

template <typename T>
const T Point<T>::getY() const
{
    return y;
}

// __Setters__
template <typename T>
void Point<T>::setX(const T x)
{
    this->x = x;
}

template <typename T>
void Point<T>::setY(const T y)
{
    this->y = y;
}