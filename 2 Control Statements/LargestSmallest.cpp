/*
 * A program to input three integers.
 * Calculate and print sum, product and average of three integers.
 * Also find the largest and the smallest integer.
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    short num1, num2, num3, max_num, min_num;
    int sum = 0;
    long long product = 0;
    float average = 0.0F;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    sum = static_cast<int>(num1) + static_cast<int>(num2) + static_cast<int>(num3);
    product = static_cast<long long>(num1) * static_cast<long long>(num2) * static_cast<long long>(num3);
    average = (static_cast<float>(num1) + static_cast<float>(num2) + static_cast<float>(num3)) / 3.0F;

    cout << "Sum is " << sum << '\n';
    cout << "Product is " << product << '\n';
    cout << "Average is " << fixed << average << '\n';

    if (num1 == num2 && num2 == num3) // If all three numbers are equal
    {
        max_num = min_num = 0;
        cout << num1 << " = " << num2 << " = " << num3 << "\nHence no largest or smallest integer present\n";
    }
    else if (num1 == num2) // If 1st and 2nd numbers are equal
    {
        if (num1 < num3)
        {
            max_num = num3;
            cout << "Largest integer is " << max_num << '\n';
            cout << "No smallest integer\n";
        }
        else
        {
            min_num = num3;
            cout << "Smallest integer is " << min_num << '\n';
            cout << "No largest integer\n";
        }
    }
    else if (num2 == num3) // If 2nd and 3rd numbers are equal
    {
        if (num2 < num1)
        {
            max_num = num1;
            cout << "Largest integer is " << max_num << '\n';
            cout << "No smallest integer\n";
        }
        else
        {
            min_num = num1;
            cout << "Smallest integer is " << min_num << '\n';
            cout << "No largest integer\n";
        }
    }
    else if (num3 == num1) // If 3rd and 1st numbers are equal
    {
        if (num3 < num2)
        {
            max_num = num3;
            cout << "Largest integer is " << max_num << '\n';
            cout << "No smallest integer\n";
        }
        else
        {
            min_num = num2;
            cout << "Smallest integer is " << min_num << '\n';
            cout << "No largest integer\n";
        }
    }
    else // If all three numbers are not equal
    {
        max_num = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
        min_num = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

        cout << "Largest integer is " << max_num << '\n';
        cout << "Smallest integer is " << min_num << '\n';
    }

    getch();
    return 0;
}