
#include <iostream>
#include <conio.h>

#include "box_container.h"

int main()
{
     using namespace std;

     /* BoxContainer<short> box_container1;

     box_container1.initializeRandomNumbers();
     cout << "<short> Box 1 :-\n"
          << box_container1 << "\n\n";

     BoxContainer<int> box_container2;

     box_container2.initializeRandomNumbers();
     cout << "<int> Box 2 :-\n"
          << box_container2 << "\n\n";

     BoxContainer<long long> box_container3;

     box_container3.initializeRandomNumbers();
     cout << "<long long> Box 3 :-\n"
          << box_container3 << "\n\n";

     BoxContainer<uint16_t> box_container4;

     box_container4.initializeRandomNumbers();
     cout << "<unisgned short> Box 4 :-\n"
          << box_container4 << "\n\n";

     BoxContainer<uint32_t> box_container5;

     box_container5.initializeRandomNumbers();
     cout << "<unisgned int> Box 5 :-\n"
          << box_container5 << "\n\n";

     BoxContainer<uint64_t> box_container6;

     box_container6.initializeRandomNumbers();
     cout << "<unsigned long long> Box 6 :-\n"
          << box_container6 << "\n\n";

     BoxContainer<float> box_container7;

     box_container7.initializeRandomNumbers();
     cout << "<float> Box 7 :-\n"
          << box_container7 << "\n\n";

     BoxContainer<double> box_container8(16);

     box_container8.initializeRandomNumbers();
     cout << "<double> Box 8 :-\n"
          << box_container8 << "\n\n";

     BoxContainer<long double> box_container9(12);

     box_container9.initializeRandomNumbers();
     cout << "<long double> Box 9 :-\n"
          << box_container9 << "\n\n"; */

     cout << fixed;

     BoxContainer<int> box_container_1(15);

     box_container_1.initializeRandomNumbers();
     cout << "box_container_1 :-\n"
          << box_container_1 << "\n\n";

     BoxContainer<int> box_container_2(10);

     box_container_2 = std::move(box_container_1);

     cout << "box_container_2 :-\n"
          << box_container_2 << "\n\n";

     BoxContainer<int> box_container_3(std::move(box_container_2));

     cout << "box_container_3 :-\n"
          << box_container_3 << "\n\n";

     BoxContainer<float> box_container_4(10);

     box_container_4.initializeRandomNumbers();

     cout << "box_container_4 :-\n"
          << box_container_4 << "\n\n";

     float remove_element = 0.0F;

     cout << "Enter an element to be removed(upto 6 decimal places) : ";
     cin >> remove_element;

     box_container_4.removeElement(remove_element);

     cout << "box_container_4 :-\n"
          << box_container_4 << "\n\n";

     BoxContainer<int> box_container_5(10);

     box_container_5.initializeRandomNumbers();

     cout << "box_container_5 :-\n"
          << box_container_5 << "\n\n";

     int remove_element_int = 0;

     cout << "Enter an element to be removed : ";
     cin >> remove_element_int;

     box_container_5.removeElement(remove_element_int);

     cout << "box_container_5 :-\n"
          << box_container_5 << "\n\n";

     getch();
     return 0;
}