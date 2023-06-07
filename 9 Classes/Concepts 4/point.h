#pragma once

class Point
{
    float *x, *y;

    void invalidate()
    {
        x = nullptr;
        y = nullptr;
    }

public:
    Point(float, float);
    Point(const Point &); // Copy Constructor
    Point(Point &&);      // Move Constructor
    ~Point();

    void setX(float);
    void setY(float);

    float *getX() const;
    float *getY() const;

    float *stealX()
    {
        float *new_x = x;
        x = nullptr;
        return new_x;
    }
    float *stealY()
    {
        float *new_y = y;
        y = nullptr;
        return new_y;
    }
};