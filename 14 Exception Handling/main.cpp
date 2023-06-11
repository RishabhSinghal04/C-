
// #include <iostream>
#include <conio.h>
#include <exception>

#include "levels.h"
#include "exception.h"
#include "animal.h"
#include "students.h"
#include "divide_by_zero.h"

void division_by_zero();
void nested_try_blocks();
void throwing_class_objects();
void custom_terminate_function();
void no_except() noexcept;

double division_of_real_numbers(auto &, auto &);

int main()
{
    using namespace std;

    /* division_by_zero();

    auto numerator = 0, denominator = 0;

    std::cout << "Enter Numerator: ";
    std::cin >> numerator;

    std::cout << "Enter Denominator: ";
    std::cin >> denominator;

    try
    {
        auto result = division_of_real_numbers(numerator, denominator);
    }
    catch (const string &e)
    {
        cerr << "Exception : " << e << '\n';
    } */

    // Exception thrown in fun3(), handled in main()
    /* try
    {
        fun1();
    }
    catch (int e)
    {
        std::cerr<<"Handling exception in main()\n";
    } */

    // fun1();

    // nested_try_blocks();

    // throwing_class_objects();

    /* set_terminate(&custom_terminate_function);
    throw 1; */

    // no_except();

    /* Animal animal;
    try
    {
        Feline &feline_ref = dynamic_cast<Feline &>(animal);
    }
    catch (std::exception &ex)
    {
        std::cout << "Something is wrong : " << ex.what() << std::endl;
    } */

    /* Students students("John Snow", "Terry Boomd",
                      "Nicholai Itchenko", "Bilom Atunde", "Lily Park");

    try
    {
        std::cout << students.get_student(2) << std::endl;
        std::cout << students.get_student(-2) << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cout << "Exception cought : " << ex.what() << std::endl;
    } */

    try
    {
        divide(10, 0);
    }
    catch (std::exception &ex)
    {
        // We know that the thrown exception contains a DivideByZeroException
        // part do ws can downcast safely and call non virtual functions
        /*
        DivideByZeroException * d_z = dynamic_cast<DivideByZeroException*> (&ex);
        if(d_z){
            std::cout<< ex.what() << ": dividing " << d_z->get_a() <<
                " by "<<  d_z->get_b() << std::endl;
        }
        */
        std::cout << ex.what() << std::endl;
    }

    cout << "\nProper Ending....\n";

    getch();

    cout << "\nProper Ending....\n";

    return 0;
}

void division_by_zero()
{
    long double numerator, denominator;

    std::cout << "Enter Numerator: ";
    std::cin >> numerator;

    std::cout << "Enter Denominator: ";
    std::cin >> denominator;

    try
    {
        long double result = (denominator == 0.0L) ? throw denominator : numerator / denominator;
        std::cout << numerator << " / " << denominator << " = " << result << '\n';
    }
    catch (long double e)
    {
        std::cerr << "Cannot divide by " << e << '\n';
    }
}

void nested_try_blocks()
{
    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "lteration : " << i << '\n';
        try
        { // Outer try block
          // Exceptions thrown in this scope are
          // handled in outer catch blocks
            if (i == 2)
            {
                throw "exception for int 2 ";
            }

            try
            { // Inner try block
            }
            catch (...)
            {
                std::cout << "Inner catch\n";
            }
        }
        catch (const char *ex)
        {
            std::cout << "0uter catch(const char*) block caught" << ex << '\n';
        }
        catch (size_t ex)
        {
            std::cout << "Outer catch(size_t) block, cought " << ex << '\n';
        }
    }
}

void throwing_class_objects()
{
    // A lambda function
    auto do_something = [](size_t i)
    {
        Warning w;
        SmallError s_e;
        CriticalError c_e;

        if (i == 1)
        {
            w.setMessage("Warning for iteration 1");
            throw w;
        }
        if (i == 2)
        {
            c_e.setMessage("Critical Error for iteration 2");
            throw c_e;
        }
        if (i == 3)
        {
            s_e.setMessage("Small Error for iteration 3");
            throw s_e;
        }

        std::cout << "Doing something at iteration : " << i << '\n';
    };

    for (size_t i{}; i < 5; ++i)
    {
        try
        {
            try
            {
                do_something(i);
            }
            catch (SomethingIsWrong &ex)
            {
                if (typeid(ex) == typeid(Warning))
                {
                    std::cout << typeid(ex).name()
                              << " [Inner Catch Block], exception caught "
                              << ex.what() << '\n';
                }
                else
                {
                    throw;
                    // throw ex; // This will do a copy, and there will be slicing.
                }
            }
        }
        catch (SomethingIsWrong &ex)
        {
            std::cerr << typeid(ex).name()
                      << " [Outer Catch Block] exception Caught : "
                      << ex.what() << '\n';
        }
    }
}

void custom_terminate_function()
{
    std::cout << "Custom Terminate Function Called\n";
    std::cout << "Program will terminate in 10 seconds.....\n";
    std::abort();
}

void no_except() noexcept
{
    try
    {
        throw 1;
    }
    catch (int ex)
    {
        std::cout << "Handling int exception in no_except()\n";
        // throw;  // Warning : 'throw' will always call 'terminate'
    }
}

double division_of_real_numbers(auto &numerator, auto &denominator)
{
    return (denominator == 0)
               ? throw(std::string)("Cannot Divide By 0")
               : numerator / denominator;
}
