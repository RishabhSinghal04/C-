
#include <conio.h>

#include "ellipse.h"

int main()
{
    using namespace std;
    // Shape
    Shape shape1("shape1");
    cout << "shape count : " << Shape::m_count << '\n'; // 1

    Shape shape2("shape2");
    cout << "shape count : " << Shape::m_count << '\n'; // 2

    Shape shape3;
    cout << "shape count : " << Shape::m_count << '\n'; // 3

    cout << "***********************************************" << '\n';

    // Ellipse
    Ellipse ellipse1(10, 12, "ellipse1");
    cout << "shape count : " << Shape::m_count << '\n';     // 4
    cout << "ellipse count : " << Ellipse::m_count << '\n'; // 1

    cout << "***********************************************" << '\n';

    // Shape polymorphism
    Shape *shapes[]{&shape1, &ellipse1};

    for (auto &s : shapes)
    {
        cout << "count : " << s->get_count() << '\n';
    }

    return 0;
}