
#include <iostream>
#include <conio.h>
#include <random>

using namespace std;

void getArrayElements(double[], const size_t);
void displayArrayElements(const double[], const size_t);

long long *max(long long *, long long *);
const double *findMaxAddress(const double[], const size_t);

int main()
{
    long long num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    long long *m = max(&num1, &num2);
    cout << "Sum of " << num1 << " and " << num2 << " is " << *m;

    ++(*m);

    cout << '\n'
         << num1 << '\n'
         << num2 << '\n'
         << *m << '\n';

    // Return array element address by pointer
    size_t sizeOfArray;
    cout << "Enter number of elements: ";
    cin >> sizeOfArray;
    double num[sizeOfArray];

    getArrayElements(num, sizeOfArray);
    const double *maxElement = findMaxAddress(num, sizeOfArray);
    displayArrayElements(num, sizeOfArray);
    cout << '\n'
         << *maxElement;

    getch();
    return 0;
}

long long *max(long long *num1, long long *num2)
{
    return (*num1 > *num2) ? num1 : num2;
}

void getArrayElements(double num[], const size_t sizeOfArray)
{
    random_device rd;
    uniform_real_distribution dist(-999.0, 999.0);

    for (size_t index = 0; index < sizeOfArray; ++index)
    {
        num[index] = dist(rd);
    }
}

void displayArrayElements(const double num[], const size_t sizeOfArray)
{
    for (size_t index = 0; index < sizeOfArray; ++index)
    {
        (index != 0) ? cout << ", " << num[index] : cout << "[ " << num[index];
    }
    cout << " ]";
}

const double *findMaxAddress(const double num[], const size_t sizeOfArray)
{
    size_t max_index = 0;
    double max = num[0];

    for (size_t index = 1; index < sizeOfArray; ++index)
    {
        if (num[index] > max)
        {
            max = num[index];
            max_index = index;
        }
    }
    return &num[max_index];
}