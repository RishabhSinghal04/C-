#pragma once

class Point
{
    double x, y;

public:
    Point();
    Point(double, double);

    // Getters
    double getX() const;
    double getY() const;

    // Setters
    void setX(const double &);
    void setY(const double &);

    // Operator Overloading
    Point operator+(const Point &right) const;
    Point operator-(const Point &right) const;
    std::ostream &operator<<(std::ostream &) const;
    // Prefix Operators
    void operator++();
    void operator--();
    // Postfix Operators
    Point operator++(int);
    Point operator--(int);
};