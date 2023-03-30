/*
 * BMI = (Weight in Pounds X 703) / (Height in Inches X Height in Inches)
 * BMI = Weight in Kilograms / (Height in Meters X Height in Meters)
 *
 * Input user's weight in pounds or kilograms and height accordingly.
 * Calculate and display user's BMI.
 *
 * BMI VALUES
 * Underweight: less than 18.5
 * Noramal: between 18.5 and 24.9
 * Overweight: between 25 and 29.9
 * Obese: 30 or greater
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float weight, height, bodyMassIndex = 0.0F;
    unsigned short choice;

    cout << "Press '1' to input weight in pounds and height in inches\n";
    cout << "Press '2' to input weight in kilograms and height in meters\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter weight in pounds: ";
        cin >> weight;
        cout << "Enter height in inches: ";
        cin >> height;

        bodyMassIndex = (weight * 703.0F) / (height * height);
        cout << "Your Body Mass Index (BMI) is " << bodyMassIndex << '\n';
        break;

    case 2:
        cout << "Enter weight in kilograms: ";
        cin >> weight;
        cout << "Enter height in meters: ";
        cin >> height;

        bodyMassIndex = (weight) / (height * height);
        cout << "Your Body Mass Index (BMI) is " << bodyMassIndex << '\n';
        break;

    default:
        cout << "INVALID";
        break;
    }

    if (bodyMassIndex < 18.5F)
    {
        cout << "Underwight\n";
    }
    else if (bodyMassIndex < 24.9F)
    {
        cout << "Normal\n";
    }
    else if (bodyMassIndex < 29.9F)
    {
        cout << "Overweight\n";
    }
    else
    {
        cout << "Obese\n";
    }

    cout << "\n***** BMI VALUES *****\n Underweight : less than 18.5\n Noramal : between 18.5 and 24.9\n Overweight : between 25 and 29.9\n Obese : 30 or greater ";
    
    getch();
    return 0;
}