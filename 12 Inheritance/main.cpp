
#include <iostream>
#include <conio.h>

#include "person.h"
#include "player.h"
#include "engineer.h"
#include "civil_engineer.h"

void _Person();
void _Player();
void _Engineer();
void _CivilEngineer();

int main()
{
    using namespace std;

    cout << "Person:-\n";
    _Person();

    cout << "\nPlayer:-\n";
    _Player();

    cout << "\nEngineer:-\n";
    _Engineer();

    cout << "\nCivil Engineer:-\n";
    _CivilEngineer();

    getch();
    return 0;
}

void _Person()
{
    Person person1("Daniel", "Sam", 12);
    Person person2;
    Person person3("Steve");
    Person person4("James", "Newton");

    person2.set_first_name("Name2");
    person2.set_last_name("Sr.Name2");
    person2.set_age(10);

    std::cout << "Person 1 : " << person1.get_first_name()
              << " " << person1.get_last_name()
              << "\t Age : " << person1.get_age() << '\n';

    std::cout << "Person 2 : " << person2.get_first_name()
              << " " << person2.get_last_name()
              << "\t Age : " << person2.get_age() << '\n';

    std::cout << "Person 3 : " << person3.get_first_name() << '\n';

    std::cout << "Person 4 : " << person4.get_first_name() << " "
              << person4.get_last_name() << '\n';
}

void _Player()
{
    Player player1;

    player1.set_first_name("Player");
    player1.set_last_name("Sr Name");
    player1.set_age(10);
    player1.set_game("Hockey");

    std::cout << "Player 1 : " << player1.get_first_name()
              << " " << player1.get_last_name()
              << "\t Age : " << player1.get_age()
              << "\t Game : " << player1.get_game() << '\n';

    Player player2("Cricket");
    std::cout << "Player 2 : " << player2.get_first_name()
              << " " << player2.get_last_name()
              << "\t Age : " << player2.get_age()
              << "\tGame : " << player2.get_game() << '\n';

    Player player3("Joseph", "Lane", 24, "Basketball");
    std::cout << "Player 1 : " << player3.get_first_name()
              << " " << player3.get_last_name()
              << "\t Age : " << player3.get_age()
              << "\tGame : " << player3.get_game() << '\n';
}

void _Engineer()
{
    Engineer engineer1;

    uint16_t a = engineer1.Age();
    std::cout << "\nage : " << a << '\n';

    Engineer engineer2("Jack", "", 28, 2);
    std::cout << "Engineer 2 : " << engineer2.get_first_name()
              << " " << engineer2.get_last_name()
              << "\t Age : " << engineer2.get_age()
              << "\t Contract Count : " << engineer2.get_contract_count() << '\n';

    Engineer engineer3(engineer2);
    std::cout << "Engineer 3 : " << engineer3.get_first_name()
              << " " << engineer3.get_last_name()
              << "\t Age : " << engineer3.get_age()
              << "\t Contract Count : " << engineer3.get_contract_count() << '\n';

    // Engineer engineer2("First Name", "Sr. Name", 27, 12);
    // Compiler error when base class (Person) access specifier is private
    // engineer1.get_first_name("Enginner");
    // engineer2.get_last_name("Sr Name");
}

void _CivilEngineer()
{
    CivilEngineer civil_engineer1;

    // Compiler error when base class (Engineer) has it's base class (Person) access specifier private
    // Base class of CivilEngineer is Engineer with public access specifier
    // civil_engineer1.get_first_name();

    CivilEngineer civil_engineer2("Adam", "", 40, 9, "Ceil Expert");
    std::cout << "Civil Engineer 2 : " << civil_engineer2.get_first_name()
              << " " << civil_engineer2.get_last_name()
              << "\t Age : " << civil_engineer2.get_age()
              << "\t Contract Count : " << civil_engineer2.get_contract_count()
              << "\t Speciality : " << civil_engineer2.get_speciality() << '\n';

    CivilEngineer civil_engineer3;
    std::cout << "Civil Engineer 3 :-\n ";
    std::cout << "Age is " << civil_engineer3.Age() << " (Called the method of derived class)\n";
    std::cout << "Age is " << civil_engineer3.Engineer::Age() << " (Called the method of base class)\n";
}
