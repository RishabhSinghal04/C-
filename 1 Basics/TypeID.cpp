
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    bool flag;
    char ch;
    short var1;
    int int_var;
    unsigned uint_var;
    long var2;
    long long ll_var;
    float flt;
    double var3;
    long double ld_var;
    auto auto_var = 23423;
    auto auto_var2 = 3245235.34346;

    cout << "Type name of bool is " << typeid(bool).name() << '\n';
    cout << "Type name of flag is " << typeid(bool).name() << '\n';

    cout << '\n';

    cout << "Type name of char is " << typeid(char).name() << '\n';
    cout << "Type name of variable ch is " << typeid(ch).name() << '\n';
    cout << "Type name of unsigned char is " << typeid(unsigned char).name() << '\n';
    cout << "Type name of signed char is " << typeid(signed char).name() << '\n';

    cout << '\n';

    cout << "Type name of short is " << typeid(short).name() << '\n';
    cout << "Type name of variable var1 is " << typeid(var1).name() << '\n';
    cout << "Type name of unsigned short is " << typeid(unsigned short).name() << '\n';
    cout << "Type name of signed short is " << typeid(signed short).name() << '\n';

    cout << '\n';

    cout << "Type name of int is " << typeid(int).name() << '\n';
    cout << "Type name of variable int_var is " << typeid(int_var).name() << '\n';
    cout << "Type name of unsigned int is " << typeid(unsigned int).name() << '\n';
    cout << "Type name of signed int is " << typeid(signed int).name() << '\n';

    cout << '\n';

    cout << "Type name of long is " << typeid(long).name() << '\n';
    cout << "Type name of variable var2 is " << typeid(var2).name() << '\n';
    cout << "Type name of unsigned long is " << typeid(unsigned long).name() << '\n';
    cout << "Type name of signed long is " << typeid(signed long).name() << '\n';

    cout << '\n';

    cout << "Type name of long long is " << typeid(long long).name() << '\n';
    cout << "Type name of variable ll_var is " << typeid(ll_var).name() << '\n';
    cout << "Type name of unsigned long long is " << typeid(unsigned long long).name() << '\n';
    cout << "Type name of signed long long is " << typeid(signed long long).name() << '\n';

    cout << '\n';

    cout << "Type name of float is " << typeid(float).name() << '\n';
    cout << "Type name of varible flt is " << typeid(flt).name() << '\n';

    cout << '\n';

    cout << "Type name of double is " << typeid(double).name() << '\n';
    cout << "Type name of varible var3 is " << typeid(var3).name() << '\n';

    cout << '\n';

    cout << "Type name of long double is " << typeid(long double).name() << '\n';
    cout << "Type name of varible ld_var is " << typeid(ld_var).name() << '\n';

    cout << '\n';

    cout << "Type name of varible auto_var is " << typeid(auto_var).name() << '\n';
    cout << "Type name of varible auto_var2 is " << typeid(auto_var2).name() << '\n';

    getch();
    return 0;
}