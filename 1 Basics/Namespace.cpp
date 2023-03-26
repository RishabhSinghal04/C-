// Basic of namespace

#include <iostream>
#include <conio.h>

using namespace std;

namespace firstNamespace
{
    void display()
    {
        cout << "Called First Namespace";
    }
}

namespace secondNamespace
{
    void display()
    {
        cout << "Called Second Namespace";
    }
}

using namespace firstNamespace;

int main()
{
    display();
    cout << '\n';

    secondNamespace ::display();

    getch();
    return 0;
}