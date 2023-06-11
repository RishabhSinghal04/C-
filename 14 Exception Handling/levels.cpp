
#include "levels.h"

void fun1()
{
    std::cout << "Starting function fun1\n";

    // Exception thrown in fun3(), handled in fun1()
    /* try
    {
        fun2();
    }
    catch (int e)
    {
        std::cerr << "Handling exception in fun1()\n";
    } */

    fun2();
    std::cout << "Ending function fun1\n";
}

void fun2()
{
    std::cout << "Starting function fun2\n";

    // Exception thrown in fun3(), handled in fun2()
    /* try
    {
        fun3();
    }
    catch (int e)
    {
        std::cerr << "Handling exception in fun2()\n";
    } */

    fun3();
    std::cout << "Ending function fun2\n";
}

void fun3()
{
    std::cout << "Starting function fun3\n";

    // Exception thrown in fun3(), handled in fun3()
    try
    {
        exception_thrower();
    }
    catch (int e)
    {
        std::cerr << "Handling exception in fun3()\n";
    }

    // Exception thrwon in fun3(), not handled
    // exception_thrower();

    std::cout << "Ending function fun3\n";
}

void exception_thrower()
{
    std::cout << "Starting exception_thrower()\n";
    throw 0;
    std::cout << "Ending exception_thrower()\n";
}
