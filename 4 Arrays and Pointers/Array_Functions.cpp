// A program to pass 1D and 2D variable size arrays as function parameters

#include <iostream>
#include <conio.h>

using namespace std;

/**
 * @brief A function to input integers in an array
 * @param int array
 * @param size_t size of array
 */
void inputArrayElements(int[], size_t);

/**
 * @brief A function to display array elements
 * @param  int array
 * @param  size_t size of array
 */
void displayArrayElements(const int[], size_t);

/**
 * @brief A function to input integers in a matrix
 * @param  int matrix
 * @param  size_t number of rows
 * @param  size_t number of columns
 */
void inputMatrixElements(int *[], size_t, size_t);

/**
 * @brief A function to display matrix elements
 * @param  int matrix
 * @param  size_t number of rows
 * @param  size_t number of columns
 */
void displayMatrixElements(int *[], size_t, size_t);

int main()
{
    unsigned short sizeOfArray, nRows, nColumns;

    cout << "Enter number of integers: ";
    cin >> sizeOfArray;
    int arrayOfIntegers[sizeOfArray];

    inputArrayElements(arrayOfIntegers, sizeOfArray);
    displayArrayElements(arrayOfIntegers, sizeOfArray);

    cout << '\n';
    cout << "Enter number of rows: ";
    cin >> nRows;
    cout << "Enter number of columns: ";
    cin >> nColumns;

    // Create a 2D array of nRows and nColumns
    int **matrix = new int *[nRows];

    for (size_t index = 0; index < nRows; ++index)
    {
        matrix[index] = new int[nColumns];
    }

    inputMatrixElements(matrix, nRows, nColumns);
    displayMatrixElements(matrix, nRows, nColumns);

    getch();
    return 0;
}

void inputArrayElements(int arrayOfIntegers[], size_t sizeOfArray)
{
    for (size_t indexNumber = 0; indexNumber < sizeOfArray; ++indexNumber)
    {
        cout << "Enter element at index " << indexNumber << ": ";
        cin >> arrayOfIntegers[indexNumber];
    }
}

void displayArrayElements(const int arrayOfIntegers[], size_t sizeOfArray)
{
    for (size_t index = 0; index < sizeOfArray; ++index)
    {
        cout << "  " << arrayOfIntegers[index];
    }
}

void inputMatrixElements(int *matrix[], size_t nRows, size_t nColumns)
{
    for (size_t row = 0; row < nRows; ++row)
    {
        for (size_t column = 0; column < nColumns; ++column)
        {
            cout << "Enter A[" << row << "][" << column << "]: ";
            cin >> matrix[row][column];
        }
    }
}

void displayMatrixElements(int *matrix[], size_t nRows, size_t nColumns)
{
    for (size_t row = 0; row < nRows; ++row)
    {
        for (size_t column = 0; column < nColumns; ++column)
        {
            cout << matrix[row][column] << "  ";
        }
        cout << '\n';
    }
}