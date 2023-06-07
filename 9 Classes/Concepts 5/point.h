#pragma once

class Point
{
    double x, y;
    // inline static unsigned short point_count = 0;

public:
    Point();
    Point(double);
    Point(double, double);

    // Setters
    void setX(const double &);
    void setY(const double &);

    // Getters
    const double &getX() const;
    const double &getY() const;

    // static unsigned short point_count;

    // Objects of class Point :-
    // Point *p_origin;
    // static Point p1;
    // static const Point p2;
};