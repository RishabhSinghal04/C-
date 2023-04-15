
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     // Null pointers and size of each pointer of different data type
     int *ptrInt{};
     long long *ptrLongLong{};
     float *ptrFloat{};
     double *ptrDouble{};
     long double *ptrLongDouble{};

     cout << "Pointer to int:-\n";
     cout << ptrInt << '\n'
          << sizeof(ptrInt);

     cout << "\nPointer to long long:-\n";
     cout << ptrLongLong << '\n'
          << sizeof(ptrLongLong);

     cout << "\nPointer to float:-\n";
     cout << ptrInt << '\n'
          << sizeof(ptrInt);

     cout << "\nPointer to double:-\n";
     cout << ptrDouble << '\n'
          << sizeof(ptrDouble);

     cout << "\nPointer to long double:-\n";
     cout << ptrLongDouble << '\n'
          << sizeof(ptrLongDouble);

     int num = 10;
     ptrInt = &num;
     cout << "\nAddress of variable 'num' is " << ptrInt << " and its value is " << *ptrInt;

     // Pointer to char
     const char *ptrChar{"Hello World!"};
     cout << '\n'
          << ptrChar;
     cout << '\n'
          << *ptrChar;

     getch();
     return 0;
}