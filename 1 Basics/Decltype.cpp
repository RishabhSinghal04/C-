
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int var;
    decltype(var) decl_var;

    cout << "Size of decltype decl_var is " << sizeof(decl_var);

    int &ref_var = var;
    decltype(ref_var) decl_ref = decl_var;

    decl_var = 10;
    cout << "\nValue of variable decl_var is " << decl_var << " and value of reference decl_ref is " << decl_ref;

    decl_ref = 1000;
    cout << "\nValue of variable decl_var is " << decl_var << " and value of reference decl_ref is " << decl_ref;

    getch();
    return 0;
}