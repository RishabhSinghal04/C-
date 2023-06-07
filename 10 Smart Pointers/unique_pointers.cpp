
#include <iostream>

#include "smart_pointers.h"

// Return Object
std::unique_ptr<Cube> get_unique_ptr()
{
    std::unique_ptr<Cube> cube = std::make_unique<Cube>(40.7912, "Golden");
    std::cout << "Address : " << &cube << '\n';
    return cube;
}

void uniquePointers()
{
    using namespace std;

    cout << "\tU N I Q U E  P O I N T E R S\n\n";
    cout << string(N, '-') << '\n';

    unique_ptr<Cube> cube{new Cube(10.94, "Blue")};
    unique_ptr<int> uptr_int{new int(1000)};

    cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';

    cout << "Value : " << *uptr_int << '\n'
         << ".get() : " << uptr_int.get() << '\n';
    cout << string(N, '-') << '\n';

    // Arrays
    auto uptr_arr = unique_ptr<Cube[]>(new Cube[2]{Cube(87.56, "Red"), Cube(29.00, "Grey")});
    auto uptr_arr2 = make_unique<Cube[]>(2); // Can't initialize individual elements

    for (size_t index = 0; index < 2; ++index)
    {
        cout << "Cube " << index + 1 << " :-"
             << "\nSide : " << uptr_arr[index].getSide()
             << "\nColor : " << uptr_arr[index].getColor() << '\n';
    }
    cout << string(N, '-') << '\n';

    // std::make_unique
    unique_ptr<Cube> cube2 = make_unique<Cube>(21.72);
    cube2->setColor("Orange");

    // Moving Ownership
    unique_ptr<Cube> cube3 = move(cube2);

    cout << ".get() : " << cube2.get() << '\n';
    cout << "Side : " << cube3->getSide() << "\nColor : " << cube3->getColor() << '\n';
    cout << string(N, '-') << '\n';

    // Resetting
    cube3.reset();
    cout << ".get() : " << cube3.get() << '\n';

    // Pass by value
    unique_ptr<Cube> cube4 = make_unique<Cube>(79.14, "Brown");
    uniquePointers(move(cube4));
    cout << ".get() : " << cube4.get() << '\n';
    cout << string(N, '-') << '\n';

    uniquePointers(make_unique<Cube>(2.0, "blue"));

    // Pass by reference
    unique_ptr<Cube> cube5 = make_unique<Cube>(92.75, "Blue");
    _uniquePointers(cube5);
    cout << "Side : " << cube5->getSide() << "\nColor : " << cube5->getColor() << '\n';
    cout << string(N, '-') << '\n';

    unique_ptr<Cube> c = get_unique_ptr();
    cout << "Address : " << &c << '\n';
    cout << string(N, '-') << '\n';
}

// Pass by value
void uniquePointers(std::unique_ptr<Cube> cube)
{
    std::cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';
    std::cout << std::string(N, '-') << '\n';

    cube->setSide(4.7);
    cube->setColor("Red");

    std::cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';
    std::cout << std::string(N, '-') << '\n';
}

// Pass by reference
void _uniquePointers(const std::unique_ptr<Cube> &cube)
{
    std::cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';
    std::cout << std::string(N, '-') << '\n';

    cube->setSide(4.7);
    cube->setColor("Green");

    std::cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';
    std::cout << std::string(N, '-') << '\n';
}