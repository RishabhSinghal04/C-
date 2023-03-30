/*
 * Write a program that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion.
 * The program should input the following information and display the user's cost per day of driving to work:
 * A. Total miles driven per day.
 * B. Cost per gallon of gasoline.
 * C. Average miles per gallon.
 * D. Parking fees per day.
 * E. Tolls per day.
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float distance_miles, cost_gasoline, average_miles_gallon, parking_fee, toll, total_driving_cost = 0.0F;

    cout << "Enter total miles driven per day: ";
    cin >> distance_miles;
    cout << "Enter cost per gallon of gasoline: ";
    cin >> cost_gasoline;
    cout << "Enter average miles per gallon: ";
    cin >> average_miles_gallon;
    cout << "Enter parking fees per day: ";
    cin >> parking_fee;
    cout << "Enter tolls per day: ";
    cin >> toll;

    /*
     * Let :-
     * distance travelled = 100 miles
     * average = 25 mile per gallon
     * cost per gallon of gasoline = 50
     * 1 gallon -> 25 mile
     * 100 / 25 = 4 gallon = 50 X 4 = 200 + parking fee per day + tolls per day
     */
    total_driving_cost = (distance_miles / average_miles_gallon) * cost_gasoline + parking_fee + toll;
    cout << "Total driving cost of today is " << total_driving_cost;

    getch();
    return 0;
}