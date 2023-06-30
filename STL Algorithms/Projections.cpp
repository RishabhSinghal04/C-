
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

#include <algorithm>
#include <cmath>
#include <utility>
#include <vector>

struct Point
{
    double x{}, y{};

    Point() = default;
    Point(double x, double y) : x{x}, y{y} {}

    bool operator==(const Point &point_rhs) const
    {
        return this->length() == point_rhs.length();
    }

    std::partial_ordering operator<=>(const Point &point_rhs)
    {
        if (length() > point_rhs.length())
        {
            return std::partial_ordering::greater;
        }
        else if (length() < point_rhs.length())
        {
            return std::partial_ordering::less;
        }
        else if (length() == point_rhs.length())
        {
            return std::partial_ordering::equivalent;
        }
        else
        {
            return std::partial_ordering::unordered;
        }
    }

private:
    double length() const
    {
        return sqrt(pow(x, 2.0) + pow(y, 2.0));
    }

    friend std::ostream &operator<<(std::ostream &, const Point &);
};

inline std::ostream &operator<<(std::ostream &out, const Point &point)
{
    out << "x = " << point.x << std::setw(10)
        << "\ty = " << point.y << std::setw(10)
        << "\tlength = " << point.length() << std::setw(20);
    return out;
}

template <typename T>
void display_elements(const T &container)
{
    size_t index = 0ULL;
    std::ranges::for_each(container, [&index](const auto &element)
                          { std::cout << "\nPoint " << ++index << " : " << element << '\n'; });
}

int main()
{
    using namespace std;

    vector<Point> points{{1, 2}, {10, 4}, {-2.7, 5}, {-45.56, -9.75}};

    const uint16_t NUM_OF_DASHES = 110U;
    auto display_dashes = [&NUM_OF_DASHES]()
    { cout << string(NUM_OF_DASHES, '-'); };

    display_elements(points);
    display_dashes();

    ranges::sort(points, std::less<>{});

    display_elements(points);
    display_dashes();

    ranges::sort(points, std::less<>{}, [](auto const &p)
                 { return p.x; });

    display_elements(points);
    display_dashes();

    ranges::sort(points, std::greater<>{}, &Point::y);

    display_elements(points);
    display_dashes();

    using pair = pair<uint16_t, string>;
    vector<pair> pairs{{1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}};

    auto display = [](const auto &element)
    { cout << element << '\n'; };

    cout << '\n';
    ranges::for_each(pairs, display, [](const pair &p)
                     { return p.first; });
    display_dashes();

    cout << '\n';
    ranges::for_each(pairs, display, &pair::second);
    display_dashes();

    getch();
    return 0;
}