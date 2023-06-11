
#include <iostream>
#include <conio.h>

#include "point.h"

int main()
{
     using namespace std;

     Point point1(10, 11), point2(4, 9);

     Point compound_plus(1, 1), compound_minus(14, 29);

     compound_plus += point1;
     compound_minus -= point2;

     cout << "Compound Plus :-\n";
     cout << " x : " << compound_plus.getX() << "\t y : " << compound_plus.getY() << '\n';

     cout << "Compound Minus :-\n";
     cout << " x : " << compound_minus.getX() << "\t y : " << compound_minus.getY() << '\n';

     getch();
     return 0;
}