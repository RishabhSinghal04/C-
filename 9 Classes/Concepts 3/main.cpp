
#include <iostream>
#include <conio.h>
#include "person.h"

int main()
{
    using namespace std;

    Person person1("Josh", "Gates", 44);
    //person1.displayInformation();

    Person person2(person1);
    //person2.displayInformation();

    // Modifying age for person1
    person1.setAge(49);
    /* person1.displayInformation();
    person2.displayInformation(); */

    // Modifying first name for person2
    person2.setFirstName("Bill");
    /* person2.displayInformation();
    person1.displayInformation(); */

    person1.setLastName("GATES");
    person2.setLastName("GATES");

    // Array elements are copies
    Person persons[] = {person1, person2, Person("The", "Rock")};

    cout << "\n Range Based For Loop:-\n";
    for (Person &person : persons)
    {
        person.setLastName("Gates");
        person.displayInformation();
    }
    person1.displayInformation();
    person2.displayInformation();

    cout << "\n For Loop:-\n";
    for (size_t index = 0; index < size(persons); ++index)
    {
        persons[index].setLastName("Gates");
        persons[index].displayInformation();
    }
    person1.displayInformation();
    person2.displayInformation();

    getch();
    return 0;
}