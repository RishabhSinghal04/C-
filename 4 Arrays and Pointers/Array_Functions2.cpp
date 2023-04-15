// Pass size 1D and 2D array by reference

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <random>

using namespace std;

const unsigned short sizeOfArray = 10, nRows = 2, nColumns = 3;

/**
 * @brief A function to initialize array elements with random integers
 * @param int(&) array
 */
void initializeArrayElements(int (&)[sizeOfArray]);

/**
 * @brief A function to display array elements
 * @param  int(&) array
 */
void displayArrayElements(const int (&)[sizeOfArray]);

/**
 * @brief A function to initialize matrix elements with random integers
 * @param int(&) matrix
 */
void initializeMatrixElements(int (&)[nRows][nColumns]);

/**
 * @brief  A function to display matrix elements
 * @param  int(&): matrix
 */
void displayMatrixElements(const int (&)[nRows][nColumns]);

int main()
{
    int arrayOfIntegers[sizeOfArray], matrix[nRows][nColumns];

    initializeArrayElements(arrayOfIntegers);
    displayArrayElements(arrayOfIntegers);

    cout << "\nMatrix:-\n";

    initializeMatrixElements(matrix);
    displayMatrixElements(matrix);

    getch();
    return 0;
}

void initializeArrayElements(int (&arrayOfIntegers)[sizeOfArray])
{
    random_device rd;
    uniform_int_distribution dist(-999, 999);

    for (auto &integer : arrayOfIntegers)
    {
        integer = dist(rd);
    }
}

void displayArrayElements(const int (&arrayOfIntegers)[sizeOfArray])
{
    for (auto integer : arrayOfIntegers)
    {
        cout << "  " << integer;
    }
}

void initializeMatrixElements(int (&matrix)[nRows][nColumns])
{
    random_device rd;
    uniform_int_distribution dist(-99, 99);

    for (auto row = 0; row < nRows; ++row)
    {
        for (auto column = 0; column < nColumns; ++column)
        {
            matrix[row][column] = dist(rd);
        }
    }
}

void displayMatrixElements(const int (&matrix)[nRows][nColumns])
{
    for (auto row = 0; row < nRows; ++row)
    {
        for (auto column = 0; column < nColumns; ++column)
        {
            cout << setw(5) << matrix[row][column];
        }
        cout << '\n';
    }
}