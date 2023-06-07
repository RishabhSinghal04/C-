#include <iostream>

#include "smart_pointers.h"
#include "person.h"

void weakPointers()
{
    using namespace std;

    cout << "\n\tW E A K  P O I N T E R S\n\n";

    shared_ptr<Person> p1 = make_shared<Person>("Adam");
    weak_ptr<Person> person{p1};
    cout << "use_count() : " << person.use_count() << '\n';

    shared_ptr<Person> p2 = person.lock();
    cout << "Person Name : " << p2->getName() << '\n';
    cout << "use_count() : " << p2.use_count() << '\n';

    shared_ptr<Person> p3 = make_shared<Person>("Sherlock");
    shared_ptr<Person> p4 = make_shared<Person>("Watson");

    p3->setFreind(p4);
    p4->setFreind(p3);

    cout << "Person Name : " << p3->getName() << '\n';
    cout << "Person Name : " << p4->getName() << '\n';
    cout << "use_count() : " << p3.use_count() << '\n';
    cout << "use_count() : " << p4.use_count() << '\n';
}