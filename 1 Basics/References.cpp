
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int num = 10, num2 = 100, &refNum = num2;
     const int &refNum2 = num; // const reference

     // Print address of all variables
     cout << "num : " << &num << '\n'
          << "num2 : " << &num2 << '\n'
          << "refNum : " << &refNum << '\n'
          << "refNum2 : " << &refNum2 << '\n';

     // Print values of num2 and reference variable refNum
     cout << "refNum and num2:-\n";
     cout << refNum << '\n'
          << num2 << '\n';

     refNum = num; // Changes the value only
     cout << "refNum and num2:-\n";
     cout << refNum << '\n'
          << num2 << '\n'
          << "refNum : " << &refNum << '\n';

     refNum = 1000; // Change value through reference
     cout << "refNum and num2:-\n";
     cout << refNum << '\n'
          << num2 << '\n';

     num = 12; // Change variable's value
     cout << num << '\n'
          << refNum2 << '\n';

     float flt = 11.2, &refFlt = flt;
     refNum = flt; // Points to other data type
     cout << "refFlt and refNum:-\n";
     cout << refFlt << '\n'
          << refNum;

     getch();
     return 0;
}