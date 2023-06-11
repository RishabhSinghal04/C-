
// #include <iostream>
#include <conio.h>

// #include "dynamic_base.h"
#include "dynamic_derived.h"
// #include "static_base.h"
#include "static_derived.h"

int main()
{
    using namespace std;

    constexpr uint16_t NUM_OF_DASHES = 110;

    // typeid() with fundamental types
    cout << "Fundamntal Types:-\n";
    cout << "Type of int : " << typeid(int).name() << '\n';

    typeid(22) == typeid(int)
        ? cout << "22 is an int\n"
        : cout << "22 is not an int\n";

    // typeid() with references (polymorphic)
    cout << string(NUM_OF_DASHES, '-') << "\nPolymorphic References :-\n";

    DynamicDerived dynamic_derived;
    DynamicBase &base_ref = dynamic_derived;

    cout << "Type of dynamic_derived : " << typeid(dynamic_derived).name() << '\n';
    cout << "Type of base_ref : " << typeid(base_ref).name() << '\n';

    // typeid() with pointers (polymorphic)
    cout << string(NUM_OF_DASHES, '-') << "\nPolymorphic Pointers :-\n";

    DynamicBase *b_ptr = new DynamicDerived;

    cout << "Type of b_ptr : " << typeid(b_ptr).name() << '\n';
    cout << "Type of *b_ptr : " << typeid(*b_ptr).name() << '\n'; // For pointers, dereference to see the dynamic type

    // typeid() with non polymorphic references
    cout << string(NUM_OF_DASHES, '-') << "\nNon Polymorphic References :-\n";

    StaticDerived static_derived;
    StaticBase &static_base_ref = static_derived;

    cout << "Type of static_base_ref : " << typeid(static_base_ref).name() << '\n';

    // typeid() with non polymorphic pointers
    cout << string(NUM_OF_DASHES, '-') << "\nNon Polymorphic Pointers :-\n";

    StaticBase *static_base_ptr = new StaticDerived;
    cout << "Type of static_base_ptr : " << typeid(*static_base_ptr).name() << '\n';

    cout << string(NUM_OF_DASHES, '-');

    getch();
    return 0;
}