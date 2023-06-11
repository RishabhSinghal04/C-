#pragma once

#include <iostream>

class Point
{
    double x, y;
    friend std::ostream &operator<<(std::ostream &, const Point &);
    friend std::istream &operator>>(std::istream &, Point &);

public:
    Point();
    Point(double, double);

    // Getters
    double getX() const;
    double getY() const;

    // Setters
    void setX(const double &);
    void setY(const double &);

    // Other Functions
    std::ostream &operator<<(std::ostream &);
};

inline std::ostream &operator<<(std::ostream &output_stream, const Point &point)
{
    std::cout << "\nNon Member Function\n";
    output_stream << "Point [ x : " << point.x << ", y : " << point.y << " ]\n";
    return output_stream;
}

inline std::istream &operator>>(std::istream &input_stream, Point &point)
{
    input_stream >> point.x >> point.y;
    return input_stream;
}