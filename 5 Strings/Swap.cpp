
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string fact1{"Jupiter is the largest planet in our solar system"};
    string fact2{"Sun is the largest object in our solar system"};

    // Before swap
    cout << "1st Fact : " << fact1 << "\n2nd Fact : " << fact2 << '\n';
    cout << fact1.size() << '\n'
         << fact1.capacity() << '\n'
         << fact2.size() << '\n'
         << fact2.capacity() << '\n';

    cout << "Swapping....\n";
    fact1.swap(fact2);

    // After swapp
    cout << "1st Fact : " << fact1 << "\n2nd Fact : " << fact2 << '\n';
    cout << fact1.size() << '\n'
         << fact1.capacity() << '\n'
         << fact2.size() << '\n'
         << fact2.capacity() << '\n';

    getch();
    return 0;
}