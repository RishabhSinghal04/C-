
#include <iostream>
#include <conio.h>

#include "box_container.h"

template <class T>
void swap_data(T &a, T &b)
{
    T temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}

int main()
{
    using namespace std;

    vector<int> num_container{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    BoxContainer<int> box1(num_container);
    BoxContainer<int> box2(11);

    box2.initializeRandomNumbers();

    cout << "Box 1 :-\n"
         << box1 << "\n\n";
    cout << "Box 2 :-\n"
         << box2 << "\n\n";

    swap_data(box1, box2);

    cout << "Box 1 :-\n"
         << box1 << "\n\n";
    cout << "Box 2 :-\n"
         << box2 << "\n\n";

    getch();
    return 0;
}