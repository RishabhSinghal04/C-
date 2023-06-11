#pragma once

class Point
{
    double x, y;
    long double distance_from_origin() const;

public:
    Point();
    explicit Point(double, double);

    double getX() const;
    double getY() const;

    void setX(double);
    void setY(double);

    bool operator==(const Point &point) const;
    std::partial_ordering operator<=>(const Point &point) const;
};