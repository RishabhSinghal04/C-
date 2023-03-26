// A program to generate and print random values

#include <iostream>
#include <conio.h>
#include <random>

using namespace std;

int main()
{
    enum setConst
    {
        M = 20,
        N = 5
    };

    random_device rand_num;
    uniform_int_distribution<int> Integer(0, 1000); // Generate random integers

    cout << string(M, '*') << "\n"; // Replicate '*' asterisk
    cout << "Integer Random Numbers:-\n";
    for (int i = 1; i <= N; ++i)
    {
        cout << Integer(rand_num) << "\n";
    }

    uniform_int_distribution<long long> LongLongInteger(10000000000, 10000000000000000);
    cout << string(M, '*') << '\n';
    cout << "Integer(long long) Random Numbers:-\n";
    for (int i = 1; i <= N; ++i)
    {
        cout << LongLongInteger(rand_num) << "\n";
    }

    uniform_real_distribution<float> Float(0.0, 1000.0); // Generate random floating point numbers
    cout << string(M, '*') << "\n";
    cout << "Real Random Numbers:-\n";
    for (int i = 1; i <= N; ++i)
    {
        cout << Float(rand_num) << "\n";
    }

    uniform_real_distribution<double> Double(10000.0, 10000000.0);
    cout << string(M, '*') << "\n";
    cout << "Real(double) Random Numbers:-\n";
    for (int i = 1; i <= N; ++i)
    {
        cout << Double(rand_num) << "\n";
    }

    uniform_real_distribution<long double> LongDouble(10000.0, 1000000000000.0);
    cout << string(M, '*') << "\n";
    cout << "Real(long double) Random Numbers:-\n";
    for (int i = 1; i <= N; ++i)
    {
        cout << LongDouble(rand_num) << "\n";
    }

    getch();
    return 0;
}