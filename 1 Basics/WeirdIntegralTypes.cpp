
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    short var1{38}, var2{89};
    char var3{76}, var4{97};

    cout << "size of var1 is " << sizeof(var1) << " bytes \n";
    cout << "size of var2 is " << sizeof(var2) << " bytes \n";
    cout << "size of var3 is " << sizeof(var3) << " bytes \n";
    cout << "size of var4 is " << sizeof(var4) << " bytes \n";

    // Conversion to int
    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    cout << "size of result1 is " << sizeof(result1) << " bytes \n";
    cout << "size of result2 is " << sizeof(result2) << " bytes \n";

    getch();
    return 0;
}