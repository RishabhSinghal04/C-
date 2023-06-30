
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <exception>
#include <vector>

class DivisibleBy
{
    const int denominator;

public:
    DivisibleBy(const int denominator) : denominator{denominator} {}

    bool operator()(const int numerator) const
    {
        if (denominator == 0)
        {
            throw std::string("Division By Zero Exception");
        }
        return numerator % denominator == 0;
    }
};

int main()
{
    using namespace std;

    uint32_t denominator;

    vector<uint32_t> whole_numbers;
    whole_numbers.reserve(10);

    cout << "Enter Denominator (greater than zero): ";
    cin >> denominator;

    whole_numbers.emplace_back(1);
    whole_numbers.emplace_back(112);
    // whole_numbers.emplace_back(0);
    whole_numbers.emplace_back(50);
    whole_numbers.emplace_back(29);
    whole_numbers.emplace_back(16);
    whole_numbers.emplace_back(10);

    try
    {
        any_of(begin(whole_numbers), end(whole_numbers), DivisibleBy(denominator))
            ? cout << "At least one number is divisible by " << denominator
            : cout << "None of the numbers is divisible by " << denominator;
    }
    catch (string &ex)
    {
        cout << ex;
    }

    getch();
    return 0;
}