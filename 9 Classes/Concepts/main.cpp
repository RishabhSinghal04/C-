
#include <iostream>
#include <conio.h>
#include "person.h"

/* void funPerson(Person p1)
{
     p1.setName("Ethan");
     p1.setAge(24);
     std::cout << p1.getName() << '\n'
               << p1.getAge() << '\n';
}

void practice()
{
     const Person person1("John", 23);
     std::cout << person1.getName() << '\n'
               << person1.getAge() << '\n';
     funPerson(person1);
} */

/* struct Point
{
     float x, y;
};

void structure()
{
     Point point1{10.77, 41.09};
     auto [a, b] = point1;

     std::cout << "a : " << a << '\n'
               << "b : " << b << '\n';

     point1.x = 12.00;
     point1.y = 42.11;

     std::cout << point1.x << '\n'
               << point1.y << '\n'
               << "a : " << a << '\n'
               << "b : " << b << '\n';

     auto captureStructureBinding = [a]()
     {
          std::cout << "a : " << a << '\n';
     };
     captureStructureBinding();
} */

int main()
{
     /* using namespace std;

     // Stack Objects
     Person person;
     Person person2("John", 12, 50);

     cout << boolalpha;
     cout << person.getName().empty() << '\n'
          << person.getAge() << '\n';

     cout << person2.getName() << '\n'
          << person2.getAge() << '\n';

     person2.setName("Adam");
     person2.setAge(14);

     cout << person2.getName() << '\n'
          << person2.getAge() << '\n';

     // Heap Objects
     Person *person3 = new Person();
     Person *person4 = new Person("Albert", 24, 50);

     cout << person4->getName() << '\n'
          << person4->getAge() << '\n';

     cout << person3->getName().empty() << '\n'
          << person3->getAge() << '\n';

     person3->setName("Jack");
     person3->setAge(16);

     cout << person3->getName() << '\n'
          << person3->getAge() << '\n';

     // Release Memory
     delete person3;
     delete person4;

     // Person *person5 = new Person("James", 34, 70);
     // person5->setName("Watson").setAge(40).setWeight(71);
     // cout << person5->getName();
     // delete person5; */

     // practice();
     // structure();

     Person p1("Adam", 29);
     std::cout << p1.getName() << '\n'
               << p1.getAge() << '\n';

     getch();
     return 0;
}