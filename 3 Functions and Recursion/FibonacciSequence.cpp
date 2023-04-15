/*
 * A program to print fibonacci sequence and find nth term of the sequence using recursion
 */

#include <iostream>
#include <conio.h>

using namespace std;

void displayFibonacciSequence(unsigned short);
unsigned long long fibonacciNumber(unsigned short);

int main()
{
    unsigned short nTerms, index;

    cout << "Enter number of terms: ";
    cin >> nTerms;
    displayFibonacciSequence(nTerms);

    cout << "\nEnter index: ";
    cin >> index;

    cout << "Fibonacci number at position " << index << " is " << fibonacciNumber(index - 1);

    getch();
    return 0;
}

void displayFibonacciSequence(unsigned short nTerms)
{
    if (nTerms <= 2) // Display first two terms
    {
        cout << "0, 1";
        return;
    }
    // Decrement terms one by one
    displayFibonacciSequence(nTerms - 1);

    // Display remaining terms
    static size_t firstTerm = 0, secondTerm = 1, resultantTerm = 0;
    resultantTerm = firstTerm + secondTerm;
    firstTerm = secondTerm;
    secondTerm = resultantTerm;

    cout << ", " << resultantTerm;
}

unsigned long long fibonacciNumber(unsigned short n)
{
    if (n < 2)
    {
        return n;
    }
    return fibonacciNumber(n - 1) + fibonacciNumber(n - 2);
}