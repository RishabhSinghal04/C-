
#include <iostream>
#include <conio.h>

#include "number.h"
#include "point.h"

int main()
{
     using namespace std;

     Point point1(1, 2, 4);
     Point point2(9, 10, 11);

     point1 = point2;

     Point point3 = point1;
     Point point4 = point1 = point2 = point3;
     Point point5(7, 8, 9);
     Point point6 = point5;

     point3 = point2 = point1;

     cout << "Point 3 :-\n\t x : " << point3.getX()
          << " , y : " << point3.getY()
          << " and some data : " << *point3.getSomeData() << '\n';
     cout << "Point 4 :-\n\t x : " << point4.getX()
          << " , y : " << point4.getY()
          << " and some data : " << *point4.getSomeData() << '\n';

     Number num1(99);
     Number num2(128);

     Point point7 = num1;
     Point point8;
     point8 = num2;

     cout << "Point 7 :-\n\t x : " << point7.getX()
          << " , y : " << point7.getY() << '\n';
     cout << "Point 8 :-\n\t x : " << point8.getX()
          << " , y : " << point8.getY() << '\n';

     getch();
     return 0;
}