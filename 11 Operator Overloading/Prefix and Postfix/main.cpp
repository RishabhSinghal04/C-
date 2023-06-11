
#include <iostream>
#include <conio.h>

#include "point.h"

int main()
{
     using namespace std;

     Point point1(10, 22);
     Point point2(110, 91);

     const uint16_t REPLICATE_N_TIMES = 50;

     cout << "\nPoint 1 :-\n\t x : " << point1.getX() << ", y : " << point1.getY() << '\n';
     cout << "\nPoint 2 :-\n\t x : " << point2.getX() << ", y : " << point2.getY() << '\n';
     cout << string(REPLICATE_N_TIMES, '-');

     ++point1;
     point2.operator++();

     cout << "\nPoint 1 :-\n\t x : " << point1.getX() << ", y : " << point1.getY() << '\n';
     cout << "\nPoint 2 :-\n\t x : " << point2.getX() << ", y : " << point2.getY() << '\n';
     cout << string(REPLICATE_N_TIMES, '-');

     point1.operator--();
     --point2;

     cout << "\nPoint 1 :-\n\t x : " << point1.getX() << ", y : " << point1.getY() << '\n';
     cout << "\nPoint 2 :-\n\t x : " << point2.getX() << ", y : " << point2.getY() << '\n';
     cout << string(REPLICATE_N_TIMES, '-');

     Point point3(77, 89);
     Point point4(49, 50);

     cout << "\nPoint 3 :-\n\t x : " << point3.getX() << ", y : " << point3.getY() << '\n';
     cout << "\nPoint 4 :-\n\t x : " << point4.getX() << ", y : " << point4.getY() << '\n';
     cout << string(REPLICATE_N_TIMES, '-');

     cout << "\nPoint 3 :-\n\t ";
     point3++ << cout << '\n';

     cout << "\nPoint 4 :-\n\t ";
     point4-- << cout << '\n';
     cout << string(REPLICATE_N_TIMES, '-');

     cout << "\nPoint 3 :-\n\t ";
     point3 << cout << '\n';

     cout << "\nPoint 4 :-\n\t ";
     point4 << cout << '\n';
     cout << string(REPLICATE_N_TIMES, '-');

     getch();
     return 0;
}