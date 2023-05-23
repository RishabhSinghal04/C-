
#include <iostream>
#include <conio.h>

using namespace std;

void maxInteger(const long long &, const long long &, long long &);
void maxFloatingPointNumber(const double &, const double &, double &);
void maxString(string_view, string_view, string &);

int main()
{
    long long integer1, integer2, outputInteger = 0LL;
    double floatingPoint1, floatingPoint2, outputDouble = 0.0;
    string str1, str2, outputString = "";

    cout << "Enter two integers: ";
    cin >> integer1 >> integer2;

    cout << "Enter two floating point numbers: ";
    cin >> floatingPoint1 >> floatingPoint2;

    cout << "Enter two strings: ";
    getline(cin >> ws, str1);
    getline(cin >> ws, str2);

    maxInteger(integer1, integer2, outputInteger);
    maxFloatingPointNumber(floatingPoint1, floatingPoint2, outputDouble);
    maxString(str1, str2, outputString);

    cout << "\nMaximum among " << integer1 << " and " << integer2 << " is " << outputInteger;
    cout << "\nMaximum among " << fixed << floatingPoint1 << " and " << floatingPoint2 << " is " << outputDouble;
    cout << '\n'
         << outputString << " has more characters among " << str1 << " and " << str2;

    getch();
    return 0;
}

void maxInteger(const long long &num1, const long long &num2, long long &output)
{
    output = (num1 > num2) ? num1 : num2;
}

void maxFloatingPointNumber(const double &num1, const double &num2, double &output)
{
    output = (num1 > num2) ? num1 : num2;
}

void maxString(string_view str1, string_view str2, string &output)
{
    output = (str1 > str2) ? str1 : str2;
}