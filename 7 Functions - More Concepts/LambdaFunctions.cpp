
#include <iostream>
#include <conio.h>

using namespace std;

void CaptureLists();

int main()
{
    // Lambda Function Signature
    auto lambdaFunction = []()
    {
        cout << "A Lambda Function\n";
    };

    lambdaFunction(); // Call Lambda Function

    // Call Lambda Function directly after definition
    []()
    {
        cout << "Calling Directly\n";
    }();

    // Lambda Function that takes parameters
    [](const int x, const int y)
    {
        cout << "x = " << x << '\n'
             << "y = " << y << '\n';
    }(1000, 10);

    // Lambda Function that return something
    auto sum = [](const int x, const int y)
    {
        return x + y;
    }(1000, 10);

    cout << "Sum of 1000 and 10 is " << sum << '\n';

    // Print result directly
    cout << "Sum of 1000 and 10 is " << [](const int x, const int y)
    {
        return x + y;
    }(1000, 10)
         << '\n';

    // Sepecify return type explicitly
    auto product = [](const float a, const float b) -> float
    {
        return a * b;
    }(1000.74, 42.9);

    cout << "Product of 1000.74 and 42.9 is " << fixed << product << '\n';

    // Passing arguments when calling lambda function
    auto result = [](const float a, const float b) -> float
    {
        return a * b;
    };
    cout << "Product of 1000.74 and 42.9 is " << fixed << result(1000.74, 42.9) << '\n';

    auto fun1 = [](const int a, const int b)
    {
        return a * b;
    };

    auto fun2 = [](const float x, float y)
    {
        return x * y;
    };

    int num1 = 10, num2 = 40;
    const float fractionalNum1 = 10.5F, fractionalNum2 = 23529.72F;

    cout << fun1(num1, num2) << '\n'
         << fun1(fractionalNum1, fractionalNum2) << '\n';
    cout << fun2(fractionalNum1, fractionalNum2) << '\n'
         << fun2(num1, num2) << '\n';

    CaptureLists();

    getch();
    return 0;
}

void CaptureLists()
{
    int num1 = 1050, num2 = 1000;
    double num3 = 90.28, num4 = 121.74;

    // Capture lists by value
    cout << "Capture lists by value:-\n";
    auto fun3 = [num1, num2]()
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
    };

    for (size_t i = 1; i <= 5; ++i)
    {
        fun3();
        ++num1;
        ++num2;
    }

    num1 = 1050;
    num2 = 1000;

    // Capture lists by reference
    cout << "Capture lists by reference:-\n";
    auto fun4 = [&num1, &num2]()
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
        ++num1;
        ++num2;
    };

    for (size_t i = 1; i <= 5; ++i)
    {
        fun4();
        ++num1;
        ++num2;
    }

    // Capture all by value
    cout << "Capture all by value:-\n";
    auto all1 = [=]()
    {
        cout << num1 << '\n'
             << num2 << '\n'
             << num3 << '\n'
             << num4 << '\n';
    };

    for (size_t i = 1; i <= 5; ++i)
    {
        all1();
        ++num3;
        ++num4;
    }

    num3 = 90.28, num4 = 121.74;

    // Capture all by reference
    cout << "Capture all by reference:-\n";
    auto all2 = [&]()
    {
        cout << num1 << '\n'
             << num2 << '\n'
             << num3 << '\n'
             << num4 << '\n';
    };

    for (size_t i = 1; i <= 5; ++i)
    {
        all2();
        ++num3;
        ++num4;
    }
}