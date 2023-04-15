/*
 * A program to print tribonacci sequence and find nth term of the sequence using recursion
 */

#include <iostream>
#include <conio.h>

using namespace std;

void displayTribonacciSequence(unsigned short);
unsigned long long tribonacciNumber(unsigned short);

int main()
{
    unsigned short nTerms, index;

    cout << "Enter number of terms: ";
    cin >> nTerms;
    displayTribonacciSequence(nTerms);

    cout << "\nEnter index: ";
    cin >> index;

    cout << "Tribonacci number at position " << index << " is " << tribonacciNumber(index - 1);

    getch();
    return 0;
}

void displayTribonacciSequence(unsigned short nTerms)
{
    if (nTerms <= 3) // Display first two terms
    {
        cout << "0, 1, 1";
        return;
    }
    // Decrement terms one by one
    displayTribonacciSequence(nTerms - 1);

    // Display remaining terms
    static size_t firstTerm = 0, secondTerm = 1, thirdTerm = 1, resultantTerm = 0;
    resultantTerm = firstTerm + secondTerm + thirdTerm;
    firstTerm = secondTerm;
    secondTerm = thirdTerm;
    thirdTerm = resultantTerm;

    cout << ", " << resultantTerm;
}

unsigned long long tribonacciNumber(unsigned short n)
{
    if (n < 3)
    {
        return (n == 2) ? 1 : n;
    }
    return tribonacciNumber(n - 1) + tribonacciNumber(n - 2) + tribonacciNumber(n - 3);
}