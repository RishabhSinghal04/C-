
// #include <iostream>
#include <conio.h>

#include "box_container.h"

int main()
{
     using namespace std;

     BoxContainer<int> box1;
     cout << "Box 1 :-\n"
          << box1 << '\n';

     box1.initializeRandomNumbers();
     cout << box1 << '\n';

     box1.addElement(11);
     box1.addElement(12);

     cout << box1 << '\n';

     BoxContainer<int> box2;

     box2.initializeRandomNumbers();

     cout << "\nBox 2 :-\n"
          << box2 << '\n';

     int removeInteger = 0;

     cout << "Enter an integer to be removed: ";
     cin >> removeInteger;

     box2.removeElement(removeInteger);
     cout << box2 << '\n';

     BoxContainer<double> box3(3);
     BoxContainer<double> box4(4);

     box3.initializeRandomNumbers();
     box4.initializeRandomNumbers();

     cout << "\nBox 3 :-\n"
          << box3 << "\nBox 4 :-\n"
          << box4 << '\n';

     box4 += box3;

     cout << "\nBox 4 += Box 3 :-\n"
          << box4 << '\n';
     cout << "\nBox 4 + Box 3 :-\n"
          << box4 + box3 << '\n';

     getch();
     return 0;
}