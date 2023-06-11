#pragma once

template <typename T, T temp>
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

template <typename T, T temp>
Point<T, temp>::Point()
    : Point(0.0, 0.0)
{
}

template <typename T, T temp>
Point<T, temp>::Point(T x, T y)
    : x{x}, y{y}
{
}

// __Getters__
template <typename T, T temp>
const T Point<T, temp>::getX() const
{
    return x;
}

template <typename T, T temp>
const T Point<T, temp>::getY() const
{
    return y;
}

// __Setters__
template <typename T, T temp>
void Point<T, temp>::setX(const T x)
{
    this->x = x;
}

template <typename T, T temp>
void Point<T, temp>::setY(const T y)
{
    this->y = y;
}