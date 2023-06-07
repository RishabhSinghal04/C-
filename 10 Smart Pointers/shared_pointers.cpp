
#include <iostream>

#include "smart_pointers.h"

std::unique_ptr<Cube> getUniquePtr()
{
    std::unique_ptr<Cube> cube = std::make_unique<Cube>(29.74, "White");
    return cube;
}

std::shared_ptr<Cube> getSharedPtr()
{
    std::shared_ptr<Cube> cube = std::make_shared<Cube>(110.04, "Red");
    return cube;
}

void sharedPointers()
{
    using namespace std;

    cout << "\n\tS H A R E D  P O I N T E R S\n\n";
    cout << string(N, '-') << '\n';

    shared_ptr<int> int_ptr{new int(44)};

    cout << "int_ptr : " << *int_ptr << '\n';
    *int_ptr = 50;
    cout << "int_ptr : " << *int_ptr << '\n';
    cout << "Use count : " << int_ptr.use_count() << '\n';
    cout << string(N, '-') << '\n';

    // Arrays
    // shared_ptr<int[]> int_arr(new int[4]{1, 2, 3, 4});
    // shared_ptr<Cube[]> cube_arr(new Cube[2]{Cube(54.00, "Yellow"), Cube(91.11, "Pink")});

    // Copying
    shared_ptr<int> int_ptr2 = int_ptr;
    cout << "Use count : " << int_ptr2.use_count() << '\n';
    cout << "int_ptr : " << *int_ptr2 << '\n';

    *int_ptr2 = 70;
    cout << "Use count : " << int_ptr2.use_count() << '\n';
    cout << "int_ptr : " << *int_ptr2 << '\n';
    cout << "int_ptr : " << *int_ptr << '\n';
    cout << "Use count : " << int_ptr.use_count() << '\n';
    cout << string(N, '-') << '\n';

    // Resetting
    int_ptr2.reset();
    cout << "int_ptr : " << *int_ptr << '\n';
    cout << "Use count : " << int_ptr.use_count() << '\n';
    cout << "Use count : " << int_ptr2.use_count() << '\n';
    cout << string(N, '-') << '\n';

    shared_ptr<Cube> cube = make_shared<Cube>(47.90, "Brown");
    cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';
    cout << string(N, '-') << '\n';

    shared_ptr<Cube> cube2{nullptr};
    cube2 = cube;
    cout << "Side : " << cube2->getSide() << "\nColor : " << cube2->getColor() << '\n';
    cout << string(N, '-') << '\n';

    // Creating shared pointers from unique pointers
    unique_ptr<Cube> cube3 = make_unique<Cube>(50.24, "Purple");
    shared_ptr<Cube> cube4 = move(cube3);
    cout << "Side : " << cube4->getSide() << "\nColor : " << cube4->getColor() << '\n';
    cout << "Use count : " << cube4.use_count() << '\n';
    cout << ".get() : " << cube3.get() << '\n';
    cout << string(N, '-') << '\n';

    // Returning smart pointers
    unique_ptr<Cube> cube5 = getUniquePtr();
    cout << "Side : " << cube5->getSide() << "\nColor : " << cube5->getColor() << '\n';
    cout << string(N, '-') << '\n';

    shared_ptr<Cube> cube6 = getUniquePtr();
    cout << "Side : " << cube6->getSide() << "\nColor : " << cube6->getColor() << '\n';
    cout << "Use count : " << cube6.use_count() << '\n';
    cout << string(N, '-') << '\n';

    shared_ptr<Cube> cube_shared_ptr = getSharedPtr();
    cout << "Side : " << cube_shared_ptr->getSide() << "\nColor : " << cube_shared_ptr->getColor() << '\n';
    cout << "Use count : " << cube_shared_ptr.use_count() << '\n';
    cout << string(N, '-') << '\n';

    shared_ptr<Cube> cube7 = make_shared<Cube>(1000.0, "Violet");
    // Pass by value
    cout << "Pass by value:-\n";
    sharedPointers(cube7);
    cout << "Side : " << cube7->getSide() << "\nColor : " << cube7->getColor() << '\n';
    cout << "Use count : " << cube7.use_count() << '\n';
    cout << std::string(N, '-') << '\n';

    // Pass by non const refernece
    cout << "Pass by non const reference:-\n";
    _sharedPointers(cube7);
    cout << "Side : " << cube7->getSide() << "\nColor : " << cube7->getColor() << '\n';
    cout << "Use count : " << cube7.use_count() << '\n';
    cout << std::string(N, '-') << '\n';

    // Pass by const reference
    cout << "Pass by const reference:-\n";
    _sharedPointersConst(cube7);
    cout << "Side : " << cube7->getSide() << "\nColor : " << cube7->getColor() << '\n';
    cout << "Use count : " << cube7.use_count() << '\n';
    cout << std::string(N, '-') << '\n';
}

void sharedPointers(std::shared_ptr<Cube> cube)
{
    std::cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';
    std::cout << "Use count : " << cube.use_count() << '\n';
    std::cout << std::string(N, '-') << '\n';

    cube->setColor("Blue");
    cube->setSide(100.0);

    std::cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';
    std::cout << "Use count : " << cube.use_count() << '\n';
    std::cout << std::string(N, '-') << '\n';
}

void _sharedPointers(std::shared_ptr<Cube> &cube)
{
    std::cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';
    std::cout << "Use count : " << cube.use_count() << '\n';
    std::cout << std::string(N, '-') << '\n';

    cube->setColor("Black");
    cube->setSide(100.0);

    std::cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';
    std::cout << "Use count : " << cube.use_count() << '\n';
    std::cout << std::string(N, '-') << '\n';
}

void _sharedPointersConst(const std::shared_ptr<Cube> &cube)
{
    std::cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';
    std::cout << "Use count : " << cube.use_count() << '\n';
    std::cout << std::string(N, '-') << '\n';

    cube->setColor("Brown");
    cube->setSide(100.0);

    std::cout << "Side : " << cube->getSide() << "\nColor : " << cube->getColor() << '\n';
    std::cout << "Use count : " << cube.use_count() << '\n';
    std::cout << std::string(N, '-') << '\n';
}