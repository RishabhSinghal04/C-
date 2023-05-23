
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    using BigInt = unsigned long long int;

    BigInt num = 123'456'789'009'762ull;

    cout << num << '\n';

    BigInt num2 = 309'845'672'790'809ull;

    cout << num2 << '\n';

    getch();
    return 0;
}