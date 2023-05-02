
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
     // Number to string conversions
     int numInteger = 10;
     float numFloat = 10.74F;
     double numDouble = 100047467.32534;

     string strInteger = to_string(numInteger), strFloat = to_string(numFloat), strDouble = to_string(numDouble);

     cout << numInteger << '\n'
          << numFloat << '\n'
          << numDouble << '\n';
     cout << strInteger << '\n'
          << strFloat << '\n'
          << strDouble << '\n';

     // Transforming to signed integral types
     string str_integer{"-74534"};
     long long largeInteger = stoll(str_integer);

     numInteger = stoi(str_integer);
     cout << numInteger << '\n'
          << largeInteger << '\n';

     // Transforming to unsigned integral types
     str_integer.clear();
     str_integer = "74534.74";

     unsigned int numIntegerPositive = stoul(str_integer);
     size_t largeIntegerPositive = stoull(str_integer);

     cout << numIntegerPositive << '\n'
          << largeIntegerPositive << '\n';

     // Transforming to floating types
     strFloat.clear();
     strFloat = "2342345.235F";
     strDouble = "-0646534645.346345252334";
     string strLongDouble = "243453456346978089452.346345252535657987";

     numFloat = stof(strFloat);
     numDouble = stod(strDouble);
     long double numLongDouble = stold(strLongDouble);

     cout << strFloat << '\n'
          << numFloat << '\n'
          << strDouble << '\n'
          << numDouble << '\n'
          << strLongDouble << '\n'
          << numLongDouble << '\n';

     getch();
     return 0;
}