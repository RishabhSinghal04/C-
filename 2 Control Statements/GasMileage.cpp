/*
 * Develop a programto input the miles driven and gallons used for each trip.
 * The program should calculate and display the miles per gallon obtained for each trip and print the combined miles per gallon obtained for all tankfuls.
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float distance_miles, gallons_used, average_mpg = 0.0F, sum_distance_miles = 0.0F, sum_gallons_used = 0.0F, total_mpg = 0.0F;

    do
    {
        cout << "Enter miles driven (-1 to quit): ";
        cin >> distance_miles;

        if (distance_miles < 0.0F) // If -1 -> Quit, else miles driven cannot be negative
        {
            (distance_miles == -1) ? cout << "Press any key...." : cout << "Miles driven cannot be negative";
            break;
        }
        else if (distance_miles > __FLT_MAX__)
        {
            cerr << "Overflow";
            break;
        }

        cout << "Enter gallons used: ";
        cin >> gallons_used;

        if (gallons_used < 0.0F)
        {
            cout << "Gallons used cannot be negative";
            break;
        }
        else if (gallons_used > __FLT_MAX__)
        {
            cerr << "Overflow";
            break;
        }

        average_mpg = distance_miles / gallons_used;
        sum_distance_miles += distance_miles;
        sum_gallons_used += gallons_used;
        total_mpg = sum_distance_miles / sum_gallons_used;

        cout << fixed;
        cout << "MPG this trip: " << average_mpg << '\n';
        cout << "Total MPG: " << total_mpg << "\n\n";

    } while (distance_miles >= 0.0F);

    getch();
    return 0;
}