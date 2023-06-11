
#include <conio.h>

#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"

void casting_pointers();
void casting_references();

int main()
{
    using namespace std;

    constexpr uint16_t SEPARATORS = 50;

    // Animal polymorphism
    Dog dog1("dark gray", "dog1");
    Cat cat1("black stripes", "cat1");
    Pigeon pigeon1("white", "pigeon1");
    Crow crow1("black", "crow1");

    Animal *animals[]{&dog1, &cat1, &pigeon1, &crow1};

    for (const auto &animal : animals)
    {
        animal->breathe();
    }

    cout << string(SEPARATORS, '-') << '\n';

    // Feline polymorphism
    Dog dog2("dark gray", "dog2");
    Cat cat2("black stripes", "cat2");
    Pigeon pigeon2("white", "pigeon2"); // Putting pigeon in felines will result in compiler error
                                        //  pigeon is an Animal, but is not a feline.
    Animal animal1("some animal");

    Feline *felines[]{&dog2, &cat2};

    for (const auto &feline : felines)
    {
        feline->run();
    }

    cout << string(SEPARATORS, '-') << '\n';

    // Bird polymorphism
    Pigeon pigeon3("white", "pigeon1");
    Crow crow3("black", "crow1");

    Bird *birds[]{&pigeon3, &crow3};

    for (const auto &bird : birds)
    {
        bird->fly();
    }

    Animal *animal = new Cat("white", "cat2");
    delete animal;

    casting_pointers();
    casting_references();

    return 0;
}

void casting_pointers()
{
    Animal *animal = new Feline("stripes", "cat");
    Feline *feline = dynamic_cast<Feline *>(animal);

    if (feline)
    {
        feline->do_some_feline_thingy();
    }
    else
    {
        std::cout << "\nCould'nt cast to Feline Pointer\n";
    }

    // When casting fails
    Dog *dog_ptr = dynamic_cast<Dog *>(animal);

    if (dog_ptr)
    {
        dog_ptr->do_some_feline_thingy();
    }
    else
    {
        std::cout << "Couldn't cast to Feline pointer\n";
    }
}

void casting_references()
{
    Feline feline("stripes", "Cat");
    Animal &animal = feline;
    Feline &feline_ref = dynamic_cast<Feline &>(animal);

    /*
     * There is no nullptr equivalent for references.
     * So there is no way to directly check the return value like with pointers.
     * Therefore turn reference into pointer and then do the cast.
     */

    Feline *feline_ptr = dynamic_cast<Feline *>(&animal);

    if (feline_ptr)
    {
        feline_ptr->do_some_feline_thingy();
    }
    else
    {
        std::cout << "\nCould'nt cast to Feline Reference\n";
    }

    // When casting fails
    Dog *dog_ptr_l = dynamic_cast<Dog *>(&animal);

    if (dog_ptr_l)
    {
        dog_ptr_l->do_some_feline_thingy();
    }
    else
    {
        std::cout << "Couldn't cast to Feline reference\n";
    }
}