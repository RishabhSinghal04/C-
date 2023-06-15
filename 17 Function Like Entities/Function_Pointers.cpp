
#include <iostream>
#include <conio.h>

long double add_numbers(double &num1, double &num2)
{
    return std::move(static_cast<long double>(num1) + num2);
}

int main()
{
    using namespace std;

    // Syntax
    long double (*fun_ptr_1)(double &, double &) = &add_numbers;
    // long double (*fun_ptr_2)(double &, double &) = add_numbers;
    // long double (*fun_ptr_3)(double &, double &){add_numbers};
    // long double (*fun_ptr_4)(double &, double &){&add_numbers};

    // auto fun_ptr_5 = add_numbers;
    // auto fun_ptr_6 = &add_numbers;
    // auto *fun_ptr_7 = &add_numbers;
    // auto *fun_ptr_8 = add_numbers;

    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << fixed;
    cout << num1 << " + " << num2 << " = " << fun_ptr_1(num1, num2) << '\n';
    cout << num1 << " + " << num2 << " = " << (*fun_ptr_1)(num1, num2) << '\n';

    getch();
    return 0;
}