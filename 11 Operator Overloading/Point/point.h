#pragma once

class Point
{
    double x, y;
    // friend Point operator+(const Point &, const Point &); // non member function

public:
    Point();
    Point(double, double);

    Point operator+(const Point &right) const; // member function
    Point operator-(const Point &right) const; // member function

    // Getters
    double getX() const;
    double getY() const;

    // Setters
    void setX(const double &);
    void setY(const double &);

    // Other Functions
    double &operator[](size_t index);
};

/* inline Point operator+(const Point &left, const Point &right)
{
    return Point(left.x + right.x, left.y + right.y);
} */