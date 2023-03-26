// Data Types in C++

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Maximum range of Primitive Data Types in C++\n";
    cout << "Maximum range of char is " << CHAR_MAX << "\n";
    cout << "Maximum range of unsigned char is " << UCHAR_MAX << "\n";
    cout << "Maximum range of wide char is " << WCHAR_MAX << "\n";
    cout << "Maximum range of short is " << SHRT_MAX << "\n";
    cout << "Maximum range of unsigned short is " << USHRT_MAX << "\n";
    cout << "Maximum range of int is " << INT_MAX << "\n";
    cout << "Maximum range of unsigned int is " << UINT_MAX << "\n";
    cout << "Maximum range of long is " << LONG_MAX << "\n";
    cout << "Maximum range of unsigned long is " << ULONG_MAX << "\n";
    cout << "Maximum range of long long is " << LONG_LONG_MAX << "\n";
    cout << "Maximum range of unsigned long long is " << ULONG_LONG_MAX << "\n";
    cout << "Maximum range of float is " << __FLT_MAX__ << "\n";
    cout << "Maximum range of double is " << __DBL_MAX__ << "\n";
    cout << "Maximum range of long double is " << __LDBL_MAX__ << "\n";

    cout << string(90, '-') << "\n";

    cout << "Minimum range of Primitive Data Types in C++\n";
    cout << "Minimum range of char is " << CHAR_MIN << "\n";
    cout << "Minimum range of wide char is " << WCHAR_MIN << "\n";
    cout << "Minimum range of short is " << SHRT_MIN << "\n";
    cout << "Minimum range of int is " << INT_MIN << "\n";
    cout << "Minimum range of long is " << LONG_MIN << "\n";
    cout << "Minimum range of long long is " << LONG_LONG_MIN << "\n";
    cout << "Minimum range of float is " << __FLT_MIN__ << "\n";
    cout << "Minimum range of double is " << __DBL_MIN__ << "\n";
    cout << "Minimum range of long double is " << __LDBL_MIN__ << "\n";

    getch();
    return 0;
}